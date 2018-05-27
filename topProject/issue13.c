#include<stdio.h>
#include<stdlib.h>
void issue13()
{
   int a,b,c,n;
   a=0;
   b=1;
   printf("Enter the number of terms: ");
   scanf("%d",&n);
   if(n==1)
   {
      printf("0");
   }
   else if(n==2)
   {
      printf("0  1");
   }
   else if(n==0)
   {
      printf("error");
   }
   else
   {
      printf("0  1");
      while(n-2>0)
     {
      c=a+b;
      a=b;
      b=c;
      n--;
      printf("%3d",c);

     }
   }
}
