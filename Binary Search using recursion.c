#include<stdio.h>
int BS(int a[],int p,int q,int x);
int main()
{
    int a[1000],n,i,j,x,b;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the element of the array:");
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("\nenter the element to search:");
    scanf("%d",&x);
    j=n;
    i=1;
    b=BS(a,i,j,x);
    if(b==-1)
    {
        printf("element is not found\n");
    }
    else
        printf("element is found at index %d",b);
    return 0;
}
int BS(int a[],int p,int q,int x)
{
    int mid;
    if(p==q)
    {
        if(a[p]==x)
            return p;
    }
    else{
        mid=(p+q)/2;
        if(a[x]==mid)
            return x;
        else if(a[mid]>x)
            return BS(a,mid+1,q,x);
        else
            return BS(a,p,mid,x);
    }
    return -1;
}
