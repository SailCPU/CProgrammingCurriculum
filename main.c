/*
 * C programming curriculum learning framework
 *
 * Authors: Sail Yang <SailCPU@gmail.com>
 *
 */
#include "modules2048.h"

int main()
{
    int Id;
    int i;
    int Keys[20]={4,6,2,8,4,4,8,6,2,4,8,6,2,4,8,6,4,6,2,8};
    for(i=0;i<20;i++){
        addElementRandom();
        display();
        update(Keys[i]);
        printf("\n\ntest key:%d\n",Keys[i]);
    }
//    int forever=1;
//    while(forever){
//
//        addElementRandom();
//        display();
//        scanf("%d",&Id);
//
//        update(Id);
//        printf("\n");
//    }
//   tiger1();
//    issue1();
    //issue2();
    //issue3();
    //issue4();
    //issue5();
    //issue6();
    //issue7();
    //issue8();
    //issue9();
    //issue10();
    //issue11();
    //issue12();
    //issue13();
    //issue14();
    //issue15();
    //issue16();
//    issue17();

    return 0;
}