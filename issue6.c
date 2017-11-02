#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//判断奇偶数
void issue6()
{
    int a,z;
    scanf("%d",&a);
    z=abs(a)%2;
    if(z==1)
    {
    printf("a is an odd number");
    }
    else
    {
    printf("a is an even number");
    }

}
