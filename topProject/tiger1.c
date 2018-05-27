//
// Created by tiger on 17-11-4.
//

#include <stdio.h>
void tiger1(){
    int a ;
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
        printf("是英文字母");

    }
    else{
        printf("不是英文字母");
    }
}