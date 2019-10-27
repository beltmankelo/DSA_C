

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
        printf("REMOVED: %d\n", t->data);
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
void deletedc(NODE f)
{
    NODE t=f->next;
    NODE j=f->next;
    if(t==NULL)
    {
        printf("\nEMPTY QUEUE\n");
        return;
    }
    while(t!=NULL)
    {
        j=t->next;
        while(j!=NULL)
        {
            if(t->data==j->data)
            {
                t->next=j->next;
                j=j->next;
            }
            else
            {
                j=j->next;
            }
        }
        t=t->next;
    }
    t=f->next;
    display(f->next);
    printf("\n");
    return;
}
int main()
{
    NODE f1=(NODE)malloc(sizeof(struct node));
    f1->next=NULL;
    f1->data=0;
    NODE f=NULL;
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
            f1->data+=1;
            f1->next=f;
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
    printf("\nDELETING DUPLICATES\n");
    deletedc(f1);
    return 0;
}
