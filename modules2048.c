//
// Created by sail on 17-11-8.
//
#include "modules2048.h"

int matrix[4][4] = {{0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0}};
int score = 0;
int MaxNumber = 2;
int oneLine[4] = {0, 0, 0, 0};

void init() {

}

void update(int keyId) {
    int i, j;
    switch (keyId) {
        case Key_Up:
            /*
             * 0 0 0 0
             * 0 0 0 0
             * 2 0 0 0    1 2 3 4
             * 0 0 0 0 -> 0 0 0 2->
             * */
            for (j = 0; j < 4; j++) {
                compress(matrix[3][j], matrix[2][j], matrix[1][j], matrix[0][j]);
                for (i = 3; i >=0; i--) {
                    matrix[i][j] = oneLine[3-i];
                }
            }
            break;

        case Key_Down:


            for (j = 0; j < 4; j++) {
                compress(matrix[0][j], matrix[1][j], matrix[2][j], matrix[3][j]);
                for (i = 0; i < 4; i++) {
                    matrix[i][j] = oneLine[i];
                }
            }
            break;

        case Key_Right:


            for (i = 0; i < 4; i++) {
                compress(matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
                for (j = 0; j <4; j++) {
                    matrix[i][j] = oneLine[j];
                }
            }
            break;

        case Key_Left:


            for (i = 0; i < 4; i++) {
                compress(matrix[i][3], matrix[i][2], matrix[i][1], matrix[i][0]);
                for (j = 3; j >=0; j--) {
                    matrix[i][j] = oneLine[3-j];
                }
            }
            break;
    }
}

int maxNumber() {
    int m[4], i;
    for (i = 0; i < 4; i++) {
        m[i] = compare(matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
    }
    int z;
    z = compare(m[0], m[1], m[2], m[3]);
    return (z);

}

int compare(int x, int y, int z, int r) {
    int p;
    p = x > y ? x : y;
    int q;
    q = z > r ? z : r;
    int m;
    m = p > q ? p : q;
    return (m);
}

int display() {
    int i, j;
//    int p,q;
//    srand((unsigned)time(NULL));
//    p=rand()%4;
//    q=rand()%4;
//    matrix[p][q]=2;
    printf("Score:%d     maxNumber:%d   \n", score, maxNumber());
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}

void compress(int a1, int a2, int a3, int a4) {

    int a[4];
    a[0] = a1;
    a[1] = a2;
    a[2] = a3;
    a[3] = a4;
    int i, j;
    int n = 0;
    for (i = 0; i < 4; i++) {
        if (a[i] == 0) {
            n++;
        }
    }
    if (n == 4) {
        for (i = 0; i < 4; i++) {
            oneLine[i] = a[i];
        }
    } else if (n == 3) {
        for (i = 0; i < 4; i++) {
            if (a[i] != 0) {
                a[3] = a[i];
                a[2] = 0;
                a[1] = 0;
                a[0] = 0;
            }

        }
        for (i = 0; i < 4; i++) {
            oneLine[i] = a[i];
        }

    } else if (n == 2) {
        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 4; j++) {
                if (a[i] != 0 && a[j] != 0 && a[i] == a[j]) {
                    a[3] = 2 * a[i];
                    a[1] = 0;
                    a[2] = 0;
                    a[0] = 0;
                } else if (a[i] != 0 && a[j] != 0 && a[i] != a[j]) {
                    a[2] = a[i];
                    a[3] = a[j];
                    a[0] = 0;
                    a[1] = 0;
                }
            }
            oneLine[i] = a[i];
        }


    } else if (n == 1) {
        int k;
        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 4; j++) {
                for (k = j + 1; k < 4; k++) {
                    if (a[i] != 0 && a[j] != 0 && a[k] != 0 && a[i] != a[j] && a[j] != a[k]) {
                        a[3] = a[k];
                        a[2] = a[j];
                        a[1] = a[i];
                        a[0] = 0;
                    } else if (a[i] != 0 && a[j] != 0 && a[k] != 0 && a[j] == a[k]) {
                        a[3] = 2 * a[k];
                        a[2] = a[i];
                        a[1] = 0;
                        a[0] = 0;
                    } else if (a[i] != 0 && a[j] != 0 && a[k] != 0 && a[i] == a[j] && a[j] != a[k]) {
                        a[3] = a[k];
                        a[2] = 2 * a[j];
                        a[1] = 0;
                        a[0] = 0;
                    }
                }
            }
        }
        int m;
        for (m = 0; m < 4; m++) {
            oneLine[m] = a[m];
        }


    } else {
        if (a[3] == a[2]) {
            if (a[1] == a[0]) {
                a[3] = 2 * a[3];
                a[2] = 2 * a[1];
                a[1] = 0;
                a[0] = 0;
            } else if (a[1] != a[0]) {
                a[3] = 2 * a[3];
                a[2] = a[1];
                a[1] = a[0];
                a[0] = 0;
            }
        } else if (a[3] != a[2]) {
            if (a[2] == a[1]) {
                a[2] = 2 * a[2];
                a[1] = a[0];
                a[0] = 0;
            } else if (a[2] != a[1]) {
                if (a[1] == a[0]) {
                    a[1] = 2 * a[1];
                    a[0] = 0;
                }
            }
        }

        for (i = 0; i < 4; i++) {
            oneLine[i] = a[i];
        }
    }
}

void addElementRandom() {
    int i, j;
    int m = 0;
    int n = 0;
    int c;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            m++;
        }
    }
    srand((unsigned) time(NULL));
    c=rand() % m +1;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            n++;
            if (n == c) {
                matrix[i][j] = 2;
                goto state;
            }
        }
    }
    state:;
}
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            printf("%3d",matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
