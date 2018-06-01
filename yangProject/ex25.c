/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
　　　第10次落地时，共经过多少米？第10次反弹多高？
*/
#include <stdio.h>
void main(){
    float a,c,s,h;
    int b;
    a=100,s=100;
    scanf("%d",&b);
    for (c=2;c<=b;c++) {
        h=a/2;
        a=h;
        s=s+h;

    }
    printf("第%d次落地时，共经过%f米，第%d次反弹%f米",b,s,b,h);
}
