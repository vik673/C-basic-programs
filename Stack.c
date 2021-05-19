#include<stdio.h>
int N=10,top=-1;
void push(int a[],int x);
int pop(int a[]);
int main()
{
    int n,b;
    int a[10],N=10;
        while(1)
        {
        printf("enter 1 for push the element into array\n");
        printf("enter 2 for pop the element from the array\n");
        printf("enter 3 for exit\n");
        scanf("%d",&n);
        if(n==1){
            printf("enter the element to be pushed\n");
            scanf("%d",&b);
        }
        switch(n)
        {
        case 1:
            push(a,b);
            break;
        case 2:
            b=pop(a);
            printf("element is deleted%d\n",b);
            break;
        case 3:
            exit(0);
        }
        }

}
void push(int a[],int x)
{
    if(top==N-1)
    {
        printf("stack is overflow\n");
        exit(0);
    }
    else{
        ++top;
        a[top]=x;
    }
}
int pop(int a[])
{
    int y;
    if(top==-1)
    {
        printf("stack is underflow\n");
        exit(0);
    }
    else
    {
        y=a[top];
        top--;
        return y;
    }
}
