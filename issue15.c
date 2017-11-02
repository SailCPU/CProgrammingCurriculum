#include<stdio.h>
#include<stdlib.h>
void issue15()
{
   int a,b,i;
   printf("Enter two positive integers: ");
   scanf("%d\n%d",&a,&b);
   for(i=a<b?a:b;;i--)
   {
      if(a%i==0&&b%i==0)
      {
         printf("GCD = %d",i);
         break;
      }
   }
}
