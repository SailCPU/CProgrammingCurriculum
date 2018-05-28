/*
题目：要求输出国际象棋棋盘。
1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。

*/
#include <stdio.h>
void main(){
    int i,j,q;
    q= 5;
    for(i=0;i<q*8;i++){
        for(j=0;j<q*8;j++){

            if(((j/q)%2==0^(i/q)%2==1)){
                printf("x");
        } else{
                printf(" ");
        }if(j==q*8-1){
                printf("\n");
            }

    }
        }
    }


