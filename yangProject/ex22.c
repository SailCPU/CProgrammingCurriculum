/*
题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
1.程序分析：利用while语句,条件为输入的字符不为'\n'.

*/
#include <stdio.h>
void main(){
    char a;
    int b=0,c=0,d=0,e=0;
    while((a=getchar())!='\n'){
       if(a>='a'&&a<'z'||a>='A'&&a<='Z'){
           b++;
       }
        else if(a==' '){
           c++;
       } else if(a>='0'&&a<='9'){
           d++;
       } else{
           e++;
       }
    }
    
    printf("字母数：%d\n空格数：%d\n数字数：%d\n其他字符：%d\n",b,c,d,e);

}
