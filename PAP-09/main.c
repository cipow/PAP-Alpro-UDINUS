#include "pustaka.h"

int main()
{
    int i,pilih,Size,num1,num2,target;
    int *arr;
    arr=malloc(sizeof(*arr));
    float avg;
    int data[50];
    char y;
    lagi:system("cls");
    puts("\tPAP-09");
    puts("\t------");
    printf("1. swapValue\n2. changeValue\n3. iniDynArray\n4. printArray\n5. putAverage\n");
    pilih=0;
    while(pilih<1||pilih>5)
    {
        printf("Pilih: ");
        scanf("%d",&pilih);
    }
    switch(pilih)
    {
    case 1:
        printf("\tMasukkan bilangan a: ");scanf("%d",&num1);
        printf("\tMasukkan bilangan b: ");scanf("%d",&num2);
        swapValue(&num1,&num2);
        printf("\tswapValue(&a,&b) --> a=%d b=%d\n",num1,num2);
        break;
    case 2:
        printf("\tUbah nilai variabel terget\n");
        printf("\tMasukkan bilangan a: ");scanf("%d",&num1);
        printf("\tMasukkan bilangan b: ");scanf("%d",&num2);
        changeValue(&target,num1,num2);
        printf("\tchangeValue(&target,a,b) --> target = %d\n",target);
        break;
    case 3:
        printf("\tMasukkan ukuran: ");scanf("%d",&Size);
        printf("\t");initDynArray(arr,Size);
        break;
    case 4:
        printf("\tMasukkan banyak array: ");scanf("%d",&Size);
        for(i=0;i<Size;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }
        printf("\t");printArray(data,Size);
        break;
    case 5:
        printf("\tMasukkan banyak array: ");scanf("%d",&Size);
        for(i=0;i<Size;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }
        putAverage(&avg,data,Size);
        printf("\tRata-rata Array %.2f",avg);
        break;
    }
    printf("\n\nke menu[y/other]: ");
    fflush(stdin);scanf("%c",&y);
    if(y=='y')
    {
        goto lagi;
    }system("pause");
}
