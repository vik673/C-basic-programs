
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
        }
        else
        {

            end->next=current;
        }
        end=current;
        end->next=start;
    }
    else
    {
        printf("\nMemory is not available\n");
    }
}
void delete_from_end()
{

    if(start!=NULL)
    {
        int n;
        node *pos;
        n=end->num;
        pos=end;
        if(start!=end)
        {
            node *prev=start;
            while(prev->next!=end)
            {
                prev=prev->next;
            }
            end=prev;
            end->next=start;
        }
        else
        {
            start=end=NULL;
        }
        free(pos);
        printf("\nElement deleted from begin:%d\n",n);
    }
    else
    {
        printf("\nCircular linked list is empty\n");
    }
}
void traverse()
{

    if(start!=NULL)
    {
        node *pos=start;
        printf("\nElement of linked list are\n");
        while(pos->next!=start)
        {
            printf("%d",pos->num);
            pos=pos->next;
        }
        printf("%d\n",pos->num);
    }
    else
    {
        printf("\n No node to traverse in circular linked list\n");
    }
}
void main()
{
    int ch;
    do{
        printf("\nEnter 1 to insert new node at begin\n");
        printf("Enter 2 to delete node from begin\n");
        printf("Enter 3 to traverse all the nodes\n");
        printf("Enter 4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert_at_end();
            break;
        case 2:
            delete_from_end();
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

