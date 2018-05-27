/*
 * Issue1 :Print Hello world
 *
 * Authors: Moshang Fan <fanmover@sina.com>
 *
 */
#include <stdio.h>

void issue1()
{

    int a, b, c, x;
    printf("please input a:");
    scanf("%d", &a);
    printf("please input b:");
    scanf("%d", &b);
    printf("please input c:");
    scanf("%d", &c);
    if (a > b) {
        x = a;
    } else {
        x = b;
    }

    if (x > c) {
        printf("最大值为%d", x);
    } else {
        printf("最大值为%d", c);
    }
}

