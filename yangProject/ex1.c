//
// Created by yang on 18-5-27.
//
//【程序1】
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
#include <stdio.h>
void main(){
    int a[4]={1,2,3,4};
    int i,j,k;
    int result[64];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                if (a[i]!=a[j]&&a[j]!=a[k]&&a[k]!=a[i]) {
                    result[i * 16 + j * 4 + k] = a[i] * 100 + a[j] * 10 + a[k];
                    printf("i=%d,j=%d,k=%d:a[i]=%d,a[j]=%d,a[k]=%d|result[i*16+j*4+k]=%d\n", i, j, k, a[i], a[j], a[k],
                           result[i * 16 + j * 4 + k]);
                }
                }
        }
    }

}

