#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}*NODE;
NODE insert(NODE f,int x)
{
    NODE n=(NODE)malloc(sizeof(struct node));
    n->data=x;
    n->next=NULL;
    if(f==NULL)
    {
        return n;
    }
    if(x<f->data)
    {
        n->next=f;
        return n;
    }
    NODE t=f;
    NODE p=f;
    while(t!=NULL&&t->data<=x)
    {
        p=t;
        t=t->next;
    }
    p->next=n;
    n->next=t;
    return f;
}
NODE delete(NODE f)
{
    if(f==NULL )
    {
        printf("\nEMPTY QUEUE\n");
        return f;
    }    
    else
    {
        NODE t=f;
        f=f->next;
        printf("REMOVED: %d", t->data);
        free(t);
        return f;
    }    
}
void display(NODE f)
{
    if(f==NULL)
    {
        printf("\nEMPTY QUEUE\n");
        return;
    }
    NODE t=f;
    printf("\nQUEUE ELEMENTS: ");
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}
int check(NODE f,int x)
{
    if(f==NULL)
    return 1;
    while(f!=NULL)
    {
        if(f->data==x)
        return 0;
        f=f->next;
    }
    return 1;
}
void unionll(NODE f,NODE s)
{
    NODE u=NULL;
    while(f!=NULL&&s!=NULL)
    {
        if(f->data<=s->data)
        {
            if(check(u,f->data))
            u=insert(u,f->data);
            f=f->next;
        }
        else
        {
            if(check(u,s->data))
            u=insert(u,s->data);
            s=s->next;
        }
    }
    while(f!=NULL)
    {
        if(check(u,f->data))
        u=insert(u,f->data);
        f=f->next;
    }
    while(s!=NULL)
    {
        if(check(u,s->data))
        u=insert(u,s->data);
        s=s->next;
    }
    display(u);
    printf("\n");
}
void intersectionll(NODE f,NODE s)
{
    NODE i=NULL;
    while(f!=NULL)
    {
        NODE t=s;
        while(s!=NULL)
        {
            if(s->data==f->data)
            i=insert(i,f->data);
            s=s->next;
        }
        s=t;
        f=f->next;
    }
    display(i);
    printf("\n");
}
int main()
{
    NODE f=NULL;
    NODE s=NULL;
    int x;
    int ch;
    printf("\nCreate LIST 1\n");
    do
    {
        printf("\nINPUT YOUR CHOICE\n");
        printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Input the entry to insert: ");
            scanf("%d",&x);
            f=insert(f,x);
            break;
            case 2:
            f=delete(f);
            break;
            case 3:
            display(f);
            break;
            default:
            printf("\nEXIT STATUS INITIATED\n");
            break;;
        }
    }while(ch!=4);
    printf("\nCreate LIST 2\n");
    do
    {
        printf("\nINPUT YOUR CHOICE\n");
        printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Input the entry to insert: ");
            scanf("%d",&x);
            s=insert(s,x);
            break;
            case 2:
            s=delete(s);
            break;
            case 3:
            display(s);
            break;
            default:
            printf("\nEXIT STATUS INITIATED\n");
            break;
        }
    }while(ch!=4);
    printf("\nUNION\n");
    unionll(f,s);
    printf("\nINTERSECTION\n");
    intersectionll(f,s);
    return 0;
}