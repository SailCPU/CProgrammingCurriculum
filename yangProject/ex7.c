//
// Created by top on 18-5-27.
//

//从键盘输入一个数，判断是否是素数
#include <stdio.h>
void main() {
    int a,b,c;
    scanf("%d",&a);
    c=0;

    for(b=2;b<a;b++){
        if (a%b==0){
            c++;
        }
    }
        if(c>0){
            printf("不是质数");
        } else{
            printf("是质数");
        }


}