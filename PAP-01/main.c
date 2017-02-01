#include "kepala.h"
#include "fungsidasar1.c"

main()
{
    int year,num,diam,pilih;
    char text[50],hh[100],menu;
    lagi:system("cls");
    puts("\tPAP-01");
    puts("\t------");
    printf("1. Tahun Kabisat\n2. Hitung Vokal\n3. Cek Prima\n4. Char Frequency\n5. Diamond\n");
    pilih=0;
    while(pilih<1||pilih>5)
    {
        printf("Pilih: ");
        scanf("%d",&pilih);
    }
    switch(pilih)
    {
    case 1:
        printf("\tInput tahun: ");
        scanf("%d",&year);
        printf("\t%d ==> %s",year,iskabisat(year)?"true":"false");
        break;
    case 2:
        printf("\tInput string: ");
        fflush(stdin);gets(text);
        printf("\tjumlah = %d",hitungvokal(text));
        break;
    case 3:
        printf("\tInput angka: ");
        scanf("%d",&num);
        printf("\t%d ==> %s",num,checkprima(num)?"true":"false");
        break;
    case 4:
        printf("\tInput string: ");
        fflush(stdin);gets(hh);printf("\n");
        charFrequency(hh);
        break;
    case 5:
        printf("\tInput baris: ");
        scanf("%d",&diam);printf("\n");
        diamond(diam);
        break;
    }
    printf("\n\nke menu[y/other]: ");
    fflush(stdin);scanf("%c",&menu);
    if(menu=='y')
    {
        goto lagi;
    }system("pause");
}
