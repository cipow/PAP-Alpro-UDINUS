#ifndef KEPALA_H_INCLUDED
#define KEPALA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
#define boolean unsigned char

int iskabisat(int year);
int hitungvokal(char text[]);
int checkprima(int num);
void charFrequency(char text[]);
void diamond(int row);
#endif // KEPALA_H_INCLUDED
