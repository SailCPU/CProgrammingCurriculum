//
// Created by top on 18-5-27.
//
//求1+1/3+1/5+...+1/99
#include <stdio.h>
void main() {
    float a, b, s;
    for (a = 0; a < 50; a++) {
        b = 1 / (1 + 2 * a);
        s = b + s;
    }
    printf("1+1/3+1/5+...+1/99=%f", s);
}