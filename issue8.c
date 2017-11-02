#include<stdio.h>
#include<stdlib.h>
void issue8()
{
    float a,b,c;
    printf("please input three numbers:");
    scanf("%f\n%f\n%f",&a,&b,&c);
    if((a>=b)&&(a>=c))
    printf("the max is %f",a);
    else if((b>=a)&&(b>=c))
    printf("the max is %f",b);
    else
    printf("the max is %f",c);
}
