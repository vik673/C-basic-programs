#include<stdio.h>
int x[1000],y[1000];
int LCS(int m,int n);
int max(a,b);
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int LCS(int m,int n)
{
    int a,b,c;
    if(m==0||n==0)
        return 0;
    else if(x[m]==y[n])
        return (1+LCS(m-1,n-1));
    else
    {
        a=LCS(m-1,n);
        b=LCS(m,n-1);
        c=max(a,b);
        return c;
    }
}
int main()
{
    int m,n,i;
    printf("Enter the size of first array:\n");
    scanf("%d",&m);
    printf("Enter the element of array:\n");
    for(i=1;i<=m;i++)
    scanf("%d",&x[i]);
    printf("Enter the size of second array:\n");
    scanf("%d",&n);
    printf("Enter the element of array:\n");
    for(i=1;i<=n;i++)
    scanf("%d",&y[i]);
    i=LCS(m,n);
    printf("lcs is:%d",i);
    return 0;
}
