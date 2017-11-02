#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void issue9()
{
   float root1,root2,a,b,c;
   float s;
   printf("quadratic equation ax^2+bx+c=0,a,b,c:");
   scanf("%f\n%f\n%f",&a,&b,&c);
   s=b*b-4*a*c;
   if(fabs(a)<1e-6)
   {
      printf("the input is error\n");
      return;
   }
   if(fabs(s)<1e-6)
   {
       root1=(-b)/(2*a);
       root2=(-b)/(2*a);
       printf("root1=root2=%f",root1);

   }
   else if(s>0)
   {
       root1=((-b+sqrt(s))/(2*a));
       root2=((-b-sqrt(s))/(2*a));
       printf("roots are %f\n%f",root1,root2);
   }
   else
   {
       root1=sqrt(-s);
       root2=-b/(2*a);
       printf("root1=%f+%f i\n",root2,root1);
       printf("root2=%f-%f i\n",root2,root1);
   }
}






