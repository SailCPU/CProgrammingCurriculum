//
// Created by top on 18-5-27.
//

//定义符号常量,从键盘输入圆的半径3.5,求圆的周长和面积。
#define PI 3.14
#include <stdio.h>
void main(){
    float r,s,l;
    scanf("%f",&r);
    l=2*PI*r;
    s=PI*PI*r;
    printf("l=%f,s=%f\n",l,s);


}