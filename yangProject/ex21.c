/*
输入两个正整数m和n，求其最大公约数和最小公倍数。
1.程序分析：利用辗除法。

*/

#include <stdio.h>

void main() {
    int m, n, a, b, c;
    scanf("%d%d", &a, &b);
    m=a;   n=b;
    while(b!=0)
    { c=a%b; a=b;  b=c;}
    printf("最大公约数:%d\n", a);
    printf("最小公倍数:%d\n", m*n/a);
}

