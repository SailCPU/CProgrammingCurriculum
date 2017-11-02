#include<stdio.h>
#include<stdlib.h>
void issue12()
{
   int n,s=1,n0;
   printf("Enter an integer: ");
   scanf("%d",&n);
   if(n==0)
   {
      printf("0!=1");
   }
   else
   {
      n0=n;
      while(n>0)
      {
         s=s*n;
         n--;
      }
      printf("%d!=%d",n0,s);
   }


}
