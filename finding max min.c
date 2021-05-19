#include<stdio.h>
int Dacmin(int a[],int i,int j);
int Dacmax(int a[],int i,int j);
int main()
{
    int a[1000],n,i,max=0,min=0,j;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the element of the array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    j=n-1;
    i=0;
    max=Dacmax(a,i,j);
    min=Dacmin(a,i,j);
    printf("%d %d",max,min);
    return 0;
}
//finding max
int Dacmax(int a[],int i,int j)
{
    int max1,max2,max,mid;
    if(i==j)
    {
        max=a[i];
    }
    else
    {
        if(i==j-1)
        {
        if(a[i]<a[j])
        {
            max=a[j];
        }
        else
        {
            max=a[i];
        }
        }
        else
            {
            mid=(i+j)/2;
            max1=Dacmax(a,i,mid);
            max2=Dacmax(a,mid+1,j);
            if(max1<max2)
                max=max2;
            else
                max=max1;
        }

    }
    return max;
}
//finding min
int Dacmin(int a[],int i,int j)
{
    int mid,min,min1,min2;
    if(i==j)
    {
        min=a[i];
    }
    else
    {
        if(i==j-1)
        {
        if(a[i]<a[j])
        {
            min=a[i];
        }
        else
        {
            min=a[j];
        }
        }
        else
            {
            mid=(i+j)/2;
            min1=Dacmin(a,i,mid);
            min2=Dacmin(a,mid+1,j);
            if(min1<min2)
                min=min1;
            else
                min=min2;

        }

    }
    return min;
}
