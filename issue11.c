#include<stdio.h>
#include<stdlib.h>
void issue11()
{
   int n,i,sum;
   sum=0;
   printf("please input a number:");
   scanf("%d",&n);
   while(i<=n)
   {
      sum+=i;
      i++;
   }
   printf("sum=%d",sum);
}
