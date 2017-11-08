/*
 * C programming curriculum learning framework
 *
 * Authors: Sail Yang <SailCPU@gmail.com>
 *
 */

#include "modules2048.h"

void test_compress();

void test_all();

int main() {
    int Id;

    //test_compress();
    //test_all()

    int forever = 1;
    addElementRandom();
    display();
    while (forever) {

        if (addElementRandom() == 0) {

            scanf("%d", &Id);
            if (Id == Key_Up || Id == Key_Down || Id == Key_Left || Id == Key_Right) {
                display();
                update(Id);
                printf("\n");
            }
        } else {
            printf("Game Over!");
            forever = 0;
        }
    }
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

void test_compress() {
    int testcases[10][4] = {{2, 0, 0, 0},
                            {2, 2, 0, 0},
                            {2, 4, 0, 0},
                            {4, 8, 8, 0},
                            {2, 2, 4, 4},
                            {0, 0, 4, 4},
                            {2, 8, 8, 2},
                            {4, 8, 4, 4},
                            {2, 2, 0, 2},
                            {8, 8, 4, 2}};
    int i;
    for (i = 0; i < 10; i++) {
        compress(testcases[i][0], testcases[i][1], testcases[i][2], testcases[i][3]);
        printf("Unit test-test case%d:\n %d,%d,%d,%d->%d,%d,%d,%d\n\n", i + 1, testcases[i][0], testcases[i][1],
               testcases[i][2], testcases[i][3], oneLine[0], oneLine[1], oneLine[2], oneLine[3]);
    }
}

void test_all() {
    int i;
    int Keys[20] = {4, 6, 2, 8, 4, 4, 8, 6, 2, 4, 8, 6, 2, 4, 8, 6, 4, 6, 2, 8};
    for (i = 0; i < 20; i++) {
        addElementRandom();
        display();
        update(Keys[i]);
        printf("\n\ntest key:%d\n", Keys[i]);
    }
}
