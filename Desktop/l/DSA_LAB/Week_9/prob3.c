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
        n->next=n;
        return n;
    }
    NODE t=f;
    while(t->next!=f)
    t=t->next;
    t->next=n;
    n->next=f;
    return f;
}
NODE delete(NODE f)
{
    if(f==NULL)
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
    NODE t=f->next;
    printf("\nQUEUE ELEMENTS: ");
    printf("%d ",f->data);
    while(t!=f)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
void merge(NODE f,NODE s)
{
    NODE u=NULL;
    NODE t=f,r=s;
    while(t->next!=f&&r->next!=s)
    {
        if(t->data<=r->data)
        {
            u=insert(u,t->data);
            t=t->next;
        }
        else
        {
            u=insert(u,r->data);
            r=r->next;
        }
    }
    if(t->next==f)
    {
        while(t->data>r->data)
        {
            u=insert(u,r->data);
            r=r->next;
        }
        u=insert(u,t->data);
        while(r->next!=s)
        {
            u=insert(u,r->data);
            r=r->next;
        }
        u=insert(u,r->data);
    display(u);
    printf("\n");
    return;
    }
    if(r->next==s)
    {
        while(r->data>t->data)
        {
            u=insert(u,t->data);
            t=t->next;
        }
        u=insert(u,r->data);
        while(t->next!=f)
        {
            u=insert(u,t->data);
            t=t->next;
        }
        u=insert(u,t->data);
    display(u);
    printf("\n");
    return;
    }
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
    printf("\nMERGING\n");
    merge(f,s);
    return 0;
}