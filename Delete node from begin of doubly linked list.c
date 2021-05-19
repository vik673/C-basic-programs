#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int num;
    struct node *prev,*next;
}node;
node *start=NULL,*end=NULL;
void insert_at_begin()
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
            end=current;
            end->next=NULL;
        }
        else
        {

            start->prev=current;
            current->next=start;
        }
        start=current;
        start->prev=NULL;

    }
    else
    {

        printf("\nMemory is not available\n");
    }
}
void delete_from_begin()
{
    if(start!=NULL)
    {
        int n;
        node *pos;
        n=start->num;
        pos=start;
        if(start!=end)
        {
            start=start->next;
            start->prev=NULL;
        }
        else{
            start=end=NULL;
        }
        free(pos);
        printf("\nEnter deleted from doubly linked list is %d\n",n);
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
        printf("Enter 2 to delete node from begin\n");
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
            delete_from_begin();
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
