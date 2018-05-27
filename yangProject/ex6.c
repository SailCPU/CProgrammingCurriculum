//
// Created by top on 18-5-27.
//

//从键盘输入年份，判断是不是闰年，如果是，输出是闰年。
#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a%4==0){
        printf("是闰年！");
    } else{
        printf("不是闰年！");
    }
}