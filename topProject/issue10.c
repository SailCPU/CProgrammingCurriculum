#include<stdio.h>
#include<stdlib.h>
void issue10()
{
   char a;
   a=getchar();
   if(a>='a'&&a<='z'||a>='A'&&a<='Z')
   {
      printf("%c is an alphabet",a);
   }
   else
   {
      printf("%c is not an alphabet",a);
   }
}
