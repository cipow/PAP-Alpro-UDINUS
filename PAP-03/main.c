#include "pustaka.h"
#define max 100
int main()
{

    int data[max]={NULL};
    int i,n,pilih;
    puts("\tPAP-03");
    printf("1. Count Array\n2. Cek Urut\n3. Bubble Sort 1\n4. Bubble Sort 2\n");
    do{
        printf("Pilih: ");
        scanf("%d",&pilih);
    }while(pilih<1||pilih>4);
    switch(pilih)
    {
    case 1:
        printf("\tInput nilai Array, input -99 untuk berhenti\n");
        i=0;while(data[i-1]!=-99)
        {
            printf("\t");scanf("%d",&data[i]);
            i++;
        }
        printf("\tCountArray = %d",countArray(data)-1);
        break;
    case 2:
        printf("\tInput batas Array  ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\t");scanf("%d",&data[i]);
        }
        printf("\tCekUrut ==> %s",cekUrut(data)?"true":"false");
        break;
    case 3:
        printf("\tInput batas Array  ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\t");scanf("%d",&data[i]);
        }
        printf("\n");
        bubelsort1(data);
        break;
    case 4:
        printf("\tInput batas Array  ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\t");scanf("%d",&data[i]);
        }
        printf("\n");
        bubelsort2(data);
    }
    return 0;
}
