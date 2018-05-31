/*
题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
　　　找出1000以内的所有完数。
*/
#include <stdio.h>
void main(){
    int a,b,c,s;

    for(a=1;a<1000;a++){
        s=0;
        for(b=1;b<a;b++) {
            if (a % b == 0) {
                s = s + b;
            }
        }if(s==a){
                printf("%d\n",s);
            }
    }
    }


