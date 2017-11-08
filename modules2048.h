//
// Created by sail on 17-11-8.
//

#ifndef CPROGRAMMINGCURRICULUM_MODULES_H
#define CPROGRAMMINGCURRICULUM_MODULES_H
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include <bios.h>


#define Key_Up 0x4800
#define Key_Down 0x5000
#define Key_Right 0x4d00
#define Key_Left 0x4b00

extern int matrix[4][4];
extern int score;
extern int MaxNumber;
extern int oneLine[4];

void init();
void update();
int maxNumber();
int compare(int x,int y,int z,int r);
int display();
void compress(int a1,int a2,int a3,int a4);
void addElementRandom();

#endif //CPROGRAMMINGCURRICULUM_MODULES_H
