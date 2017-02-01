#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void swapValue(int *num1,int *num2);
void changeValue(int *target,int num1,int num2);
void initDynArray(int *arrData,int size);
void printArray(int *arrData,int size);
void putAverage(float *avg, int *arrData,int size);

#endif // PUSTAKA_H_INCLUDED
