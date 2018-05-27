#include<stdio.h>
#include<stdlib.h>
void issue16()
{
       int a,b,i;
   printf("Enter two positive integers: ");
   scanf("%d\n%d",&a,&b);
   for(i=a>b?a:b;;i++)
   {
      if(i%a==0&&i%b==0)
      {
         printf("LCM= %d",i);
         break;
      }
   }
}
