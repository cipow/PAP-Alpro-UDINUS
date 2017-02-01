#include "pustaka.h"

int main()
{
    int i,pilih,arrSize,num1,num2;
    int data[50];
    char y;
    lagi:system("cls");
    puts("\tPAP-08");
    puts("\t------");
    printf("1. Min2\n2. Max2\n3. recMax\n4. recMin\n5. recPrintAll\n6. recMean\n7. recSelectionSort\n");
    pilih=0;
    while(pilih<1||pilih>8)
    {
        printf("Pilih: ");
        scanf("%d",&pilih);
    }
    switch(pilih)
    {
    case 1:
        printf("\tMasukkan nilai pertama: ");scanf("%d",&num1);
        printf("\tMasukkan nilai kedua  : ");scanf("%d",&num2);
        printf("\tMin2(%d,%d) --> %d\n",num1,num2,min2(num1,num2));
        break;
    case 2:
        printf("\tMasukkan nilai pertama: ");scanf("%d",&num1);
        printf("\tMasukkan nilai kedua  : ");scanf("%d",&num2);
        printf("\tMax2(%d,%d) --> %d\n",num1,num2,max2(num1,num2));
        break;
    case 3:
        printf("\tMasukkan banyak array: ");scanf("%d",&arrSize);
        for(i=0;i<arrSize;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }
        printf("\n\trecMax --> %d\n",recMax(data,0,arrSize));
        break;
    case 4:
        printf("\tMasukkan banyak array: ");scanf("%d",&arrSize);
        for(i=0;i<arrSize;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }
        printf("\n\trecMin --> %d\n",recMin(data,0,arrSize));
        break;
    case 5:
        printf("\tMasukkan banyak array: ");scanf("%d",&arrSize);
        for(i=0;i<arrSize;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }printf("\n\t");recPrintAll(data,0,arrSize);
        break;
    case 6:
        printf("\tMasukkan banyak array: ");scanf("%d",&arrSize);
        for(i=0;i<arrSize;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }
        printf("\n\trecMean --> %.3f\n",recMean(data,0,arrSize));
        break;
    case 7:
        printf("\tMasukkan banyak array: ");scanf("%d",&arrSize);
        for(i=0;i<arrSize;i++)
        {
            printf("\tArray ke-%d : ",i+1);scanf("%d",&data[i]);
        }printf("\n\t");recPrintAll(data,0,arrSize);
        recSelectionSort(data,arrSize);
        printf("\n\n\t");recPrintAll(data,0,arrSize);

        break;
    }
    printf("\n\nke menu[y/other]: ");
    fflush(stdin);scanf("%c",&y);
    if(y=='y')
    {
        goto lagi;
    }system("pause");
    return 0;
}
