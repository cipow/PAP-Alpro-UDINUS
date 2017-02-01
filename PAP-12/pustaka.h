#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int tgl;
    int bln;
    int thn;
}date;

typedef struct{
    char nim[25];
    char nama[20];
    date tgl_lahir;
    float ipk;
}mahasiswa;

date makeDate(int tgl,int bln,int thn);
mahasiswa makeMhs(char *nim, char *nama, date lahir,float ipk);
void printDate(date tanggal);
void listAllMhs(mahasiswa *data);
void listByIPK(mahasiswa *data,char criteria,float ipk);
void mhssortByName(mahasiswa *data);
void mhssortByIPK(mahasiswa *data);
mahasiswa findMhsByNIM(mahasiswa *data,char *nim);

#endif // PUSTAKA_H_INCLUDED
