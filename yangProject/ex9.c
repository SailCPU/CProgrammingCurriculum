/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
1.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后
　　　　　　的结果满足如下条件，即是结果。

*/
#include <math.h>
#include <stdio.h>


void main(){
    int a;
    double b,c,x,y;
    for (a = 0; a <100000 ; a++) {
        b=a+100,c=a+268;
        b=sqrt(b);c=sqrt(c);
        x=(int)b,y=(int)c;
        if (b==x||c==y){
            printf("%d",a);
        }

    }

}
