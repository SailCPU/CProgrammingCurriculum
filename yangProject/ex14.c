/*
题目：输出9*9口诀。
1.程序分析：分行与列考虑，共9行9列，i控制行，j控制列。

*/
#include <stdio.h>
void main(){
    int i,j,a;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            a=i*j;
            printf("%d*%d=%d    ",i,j,a);
        }printf("\n");
    }


    printf("ex14");
}
