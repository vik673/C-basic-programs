#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int num;
    struct node *prev,*next;
}node;
node *start=NULL,*end=NULL;
void insert_at_end()
{
    node *current=(node *)malloc(sizeof(node));
    if(current!=NULL)
    {

        int n;
        printf("\nEnter a number\n");
        scanf("%d",&n);
        current->num=n;
        if(start==NULL)
        {
            start=current;
            start->prev=NULL;
        }
        else
        {

            end->next=current;
            current->prev=end;
        }
        end=current;
        end->next=NULL;

    }
    else
    {

        printf("\nMemory is not available\n");
    }
}
void delete_from_specified()
{
    if(start!=NULL)
    {
        int n,i,p;
        node *pos,*prev,*next;
        printf("\nEnter the number of node to delete\n");
        scanf("%d",&p);
        pos=start;
        for(i=1;i<=p-1;i++)
        {
            pos=pos->next;
        }
        n=pos->num;
        prev=pos->prev;
        next=pos->next;
        prev->next=next;
        next->prev=prev;
        free(pos);
        printf("\nElement deleted fro node %d is %d\n",p,n);
        }
    }
    else{
        printf("\nDoubly linked list is empty\n");
    }
}
void forward_traverse()
{

    if(start!=NULL)
    {
        node *pos=start;
        printf("\nElement of linked list are\n");
        while(pos!=NULL)
        {
            printf("%d",pos->num);
            pos=pos->next;
        }
        printf("\n");
    }
    else
    {
        printf("\n No node to traverse in linked list\n");
    }
}
void backward_traverse()
{

    if(end!=NULL)
    {
        node *pos=end;
        printf("\nElement of linked list are\n");
        while(pos!=NULL)
        {
            printf("%d",pos->num);
            pos=pos->prev;
        }
        printf("\n");
    }
    else
    {
        printf("\n No node to traverse in linked list\n");
    }
}
void main()
{
    int ch;
    do{
        printf("\nEnter 1 to insert new node at begin\n");
        printf("Enter 2 to delete node from specified\n");
        printf("Enter 3 to forward traversing all nodes\n");
        printf("Enter 4 to backward traversing of all nodes\n");
        printf("Enter 5 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert_at_begin();
            break;
        case 2:
            delete_from_specified();
            break;
        case 3:
            forward_traverse();
            break;
         case 4:
            backward_traverse();
            break;
        case 5:
            exit(0);
        default:
            printf("\nWrong choice entered\n");
        }
        printf("\nEnter 0 to continue\n");
        scanf("%d",&ch);
    }while(ch==0);
}
