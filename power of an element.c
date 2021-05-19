#include<stdio.h>
int Dac_power(int a,int n);
int main()
{
  int a,n,b;
  printf("enter the element and its power:");
  scanf("%d %d",&a,&n);
  b=Dac_power(a,n);
  if(n%2==0){
  printf("power of the element is %d",b);
  }
  else{
    printf("power of the element is %d",(b*a));
  }
  return 0;
}
int Dac_power(int a,int n)
{
    int mid,b,c;
    if(n==1)
        return a;
    else{
        mid=n/2;
        b=Dac_power(a,mid);
        c=b*b;
    }
    return c;
}
