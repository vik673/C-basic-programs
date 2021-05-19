#include<stdio.h>
int x[100],y[100],Table[100][100];
int LCS(int m,int n);
int max(int a,int b);
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
    {
        if(Table[m-1][n-1]==0)
        {
            Table[m-1][n-1]=LCS(m-1,n-1);
            Table[m][n]=1+Table[m-1][n-1];
            return (Table[m][n]);
        }
    }
    else
    {
        if(Table[m-1][n]==0)
        {
            Table[m-1][n]=LCS(m-1,n);
        }
        if(Table[m][n-1]==0)
        {
            Table[m][n-1]=LCS(m,n-1);
        }
            Table[m][n]=max(Table[m-1][n],Table[m][n-1]);
    }
    return (Table[m][n]);
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

