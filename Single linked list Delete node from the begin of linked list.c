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
void delete_from_begin()
{
    if(start!=NULL)
    {
        int n;
        struct node *pos;
        n=start->num;
        pos=start;
        if(start!=end)
        {
            start=start->next;
        }
        else
        {
            start=end=NULL;

        }
        free(pos);
        pos=NULL;
        printf("\nElement deleted from begin=%d\n",n);
    }
    else{
        printf("\nLinked list is empty\n");
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
        printf("Enter 1 to insert new node at end\n");
        printf("Enter 2 to delete new node from begin\n");
        printf("Enter 3 to traverse all nodes\n");
        printf("Enter 4 to exit\n");
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
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice entered\n");
        }
        printf("\nEnter 0 to continue\n");
        scanf("%d",&ch);
    }while(ch==0);
}
