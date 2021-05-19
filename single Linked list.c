#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{

    int num;
    struct node *next;
};
struct node *start=NULL,*end=NULL;
void insert_at_begin()
{
    struct node *current=(struct node *)malloc(sizeof(struct node));
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

            current->next=start;
        }
        start=current;

    }
    else
    {

        printf("\nMemory is not available\n");
    }
}
void traverse()
{

    if(start!=NULL)
    {
        struct node *pos=start;
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
void main()
{
    int ch;
    do{
        printf("\nEnter 1 to insert new node at begin\n");
        printf("Enter 2 to traverse all nodes\n");
        printf("Enter 3 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert_at_begin();
            break;
        case 2:
            traverse();
            break;
        case 3:
            exit(0);
        default:
            printf("\nWrong choice entered\n");
        }
        printf("\nEnter 0 to continue\n");
        scanf("%d",&ch);
    }while(ch==0);
}
