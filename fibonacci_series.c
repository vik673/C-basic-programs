#include<stdio.h>
int fib(int n);
int main()
{
    int n,a;
    scanf("%d",&n);
    a= fib(n);
    printf("%d",a);
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
