#include "pustaka.h"
#include "pustaka.c"
int main()
{
    int i,pilih,data[max]={0};
    puts("\tPAP-04\n\t------");
    printf("1. CompressArray\n2. Selection Sort 1\n3. Selection Sort 2\n4. Get Median\n");
    do{
        printf("Pilih: ");
        scanf("%d",&pilih);
    }while(pilih<1||pilih>4);
    switch(pilih)
    {
    case 1:
        printf("\tMenghilangkan nilai 0 pada array, input 10 array\n");
        for(i=0;i<10;i++)
        {
            printf("\t");scanf("%d",&data[i]);
        }
        printf("\tHasilnya ");
        compressArray(data);
        break;
    case 2:
        printf("\tInput Array, input 0 untuk berhenti\n");
        i=0;
        do{
            printf("\t");scanf("%d",&data[i]);
            i++;
        }while(data[i-1]!=0);
        puts("Hasilnya ");selectionSort1(data);
        break;
    case 3:
        printf("\tInput Array, input 0 untuk berhenti\n");
        i=0;
        do{
            printf("\t");scanf("%d",&data[i]);
            i++;
        }while(data[i-1]!=0);
        puts("Hasilnya ");selectionSort2(data);
        break;
    case 4:
        printf("\tInput Array, input 0 untuk berhenti\n");
        i=0;
        do{
            printf("\t");scanf("%d",&data[i]);
            i++;
        }while(data[i-1]!=0);
        printf("\tHasilnya %d",getMedian(data));
        break;

    }
    return 0;
}
