#include<stdio.h>
int b[1000];
void mergesort(int *a,int p,int q);
int merge(int *a,int p,int mid,int k,int q);

void mergesort(int *a,int p,int q)
{
    int mid;
    if(p==q)
        return a[p];
    else
    {
        mid=(p+q)/2;
        mergesort(a,p,mid);
        mergesort(a,mid+1,q);
        merge(a,p,mid,mid+1,q);
    }
}
int merge(int *a,int p,int mid,int k,int q)
{
    int i=1,b[1000];
    while((p<=mid)&&(k<=q))
    {
        if(a[p]<=a[k])
        {
            b[i]=a[p];
            p++;
            i++;
        }
        else
        {
            b[i]=a[k];
            k++;
            i++;
        }
    }
}
int main()
{
    int a[1000],n,i,j;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the element of the array:");
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    i=0;
    j=n;
    mergesort(a,i,j);
    printf("sorted element are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
