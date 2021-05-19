#include<stdio.h>
int Table[1000];
int Dp_fib(int n);
int main()
{
    int n,a;
    scanf("%d",&n);
    a=Dp_fib(n);
    printf("%d",a);
    return 0;
}
int Dp_fib(int n)
{
    if(n==0||n==1)
        return n;
    else
    {
        if(Table[n-1]==0)
            Table[n-1]=Dp_fib(n-1);
        if(Table[n-2]==0)
            Table[n-2]=Dp_fib(n-2);
        Table[n]=Table[n-1]+Table[n-2];
        n=Table[n];
            return (n);
    }
}
