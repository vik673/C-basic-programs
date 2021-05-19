#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{

    int num;
    struct node *next;
}node;
node *start=NULL,*end=NULL;
void insert_at_end()
{
    struct node *current=(node *)malloc(sizeof(node));
    if(current!=NULL)
    {

        int n;
        printf("\nEnter a number\n");
        scanf("%d",&n);
        current->num=n;
        if(start==NULL)
        {
            start=current;
        }
        else
        {

            end->next=current;
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
        node *pos,*prev;
        prev=start;
        printf("\nEnter the number of node to delete\n");
        scanf("%d",&p);
        for(i=1;i<=p-2;i++)
        {
            prev=prev->next;
        }
        pos=prev->next;
        n=pos->num;
        prev->next=pos->next;
        free(pos);
        pos=NULL;
        printf("\nElement deleted from node %d of linked list=%d\n",p,n);
    }
    else{
        printf("\nLinked list is empty\n");
    }
}
void traverse()
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
void main()
{
    int ch;
    do{
        printf("Enter 1 to insert new node at end\n");
        printf("Enter 2 delete node from specified position\n");
        printf("Enter 3 to traverse all nodes\n");
        printf("Enter 4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert_at_end();
            break;
        case 2:
            delete_from_specified();
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

