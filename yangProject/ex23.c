/*
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
　　　共有5个数相加)，几个数相加有键盘控制。
1.程序分析：关键是计算出每一项的值。

*/
#include <stdio.h>
void main(){
    int a,b,s,c,n;
    scanf("%d,%d",&a,&b);
    s=0;
    if(0<a<=9){
        for(c=1;c<=b;c++){
            n=a+n*10;
            s=s+n;
        }
    }
    printf("%d",s);
}
