#include "pustaka.h"
date makeDate(int tgl,int bln,int thn)
{
    date x;
    x.tgl=tgl;
    x.bln=bln;
    x.thn=thn;
    return x;
}
mahasiswa makeMhs(char *nim, char *nama, date lahir,float ipk)
{
    mahasiswa x;
    strcpy(x.nim,nim);
    strcpy(x.nama,nama);
    x.tgl_lahir=lahir;
    x.ipk=ipk;
    return x;
}
void printDate(date tanggal)
{
    char bln[12][12]={"Jan","Feb","Mar","Apr","Mei","Juni","Juli","Agust","Sept","Okt","Nov","Des"};
    printf("%2d - %5s - %4d",tanggal.tgl,bln[tanggal.bln-1],tanggal.thn);
}
void listAllMhs(mahasiswa *data)
{
    int i=0;
    while(data[i].nama[0]!='\0')
    {
        printf("| %10s | %10s | ",data[i].nim,data[i].nama);
        printDate(data[i].tgl_lahir);
        printf(" | %.2f\n",data[i].ipk);
        i++;
    }
}
void listByIPK(mahasiswa *data,char criteria,float ipk)
{
    int i=0;
    switch(criteria)
    {
    case '<':
        while(data[i].nama[0]!='\0')
        {
            if(data[i].ipk<ipk)
            {
                printf("| %10s | %10s | ",data[i].nim,data[i].nama);
                printDate(data[i].tgl_lahir);
                printf(" | %.2f\n",data[i].ipk);
            }
            i++;
        }
        break;
    case '>':
        while(data[i].nama[0]!='\0')
        {
            if(data[i].ipk>ipk)
            {
                printf("| %10s | %10s | ",data[i].nim,data[i].nama);
                printDate(data[i].tgl_lahir);
                printf(" | %.2f\n",data[i].ipk);
            }
            i++;
        }
        break;
    case '=':
        while(data[i].nama[0]!='\0')
        {
            if(data[i].ipk==ipk)
            {
                printf("| %10s | %10s | ",data[i].nim,data[i].nama);
                printDate(data[i].tgl_lahir);
                printf(" | %.2f\n",data[i].ipk);
            }
            i++;
        }
        break;
    }

}
void mhssortByName(mahasiswa *data)
{
    mahasiswa x;
    int i=0,j;
    while(data[i+1].nama[0]!='\0')
    {
        j=0;
        while(data[j+1].nama[0]!='\0')
        {
            if(strcmp(data[j+1].nama,data[j].nama)<0)
            {
                x=data[j];
                data[j]=data[j+1];
                data[j+1]=x;
            }
            j++;
        }
        i++;
    }
}
void mhssortByIPK(mahasiswa *data)
{
    mahasiswa x;
    int i=0,j;
    while(data[i+1].nama[0]!='\0')
    {
        j=0;
        while(data[j+1].nama[0]!='\0')
        {
            if(data[j+1].ipk<data[j].ipk)
            {
                x=data[j];
                data[j]=data[j+1];
                data[j+1]=x;
            }
            j++;
        }
        i++;
    }
}
mahasiswa findMhsByNIM(mahasiswa *data,char *nim)
{
    int i=0;
    int ketemu=0;
    while(data[i].nama[0]!='\0')
    {
        if(strcmp(data[i].nim,nim)==0)
        {
            ketemu=1;
            break;
        }
        i++;
    }
    if(ketemu==1)
    {
        printf("| %10s | %10s | ",data[i].nim,data[i].nama);
        printDate(data[i].tgl_lahir);
        printf(" | %.2f\n",data[i].ipk);
    }
    else
    {
        printf("NULL\n");
    }
}
