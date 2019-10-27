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
    return n;
    NODE t=f;
    while(t->next!=NULL)
    t=t->next;
    t->next=n;
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
    NODE t=f;
    printf("\nQUEUE ELEMENTS: ");
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}
int main()
{
    NODE f=NULL;
    int x;
    int ch;
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
            exit(0);
        }
    }while(ch!=4);
    return 0;
}