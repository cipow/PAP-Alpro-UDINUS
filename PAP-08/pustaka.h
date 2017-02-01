#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int min2(int num1,int num2);
int max2(int num1,int num2);
int recMax(int data[],int cur,int arrSize);
int recMin(int data[],int cur,int arrSize);
void recPrintAll(int data[],int cur,int arrSize);
float recMean(int data[],int cur,int n);
void recSelectionSort(int data[],int arrSize);

#endif // PUSTAKA_H_INCLUDED
