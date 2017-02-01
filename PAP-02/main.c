#include "kepala.h"
#include "fungsidasar2.c"

main()
{
    int pilih,a,b,digit,num,num1,row;
    char menu,hh[100];
    lagi:system("cls");
    puts("\tPAP-02");
    puts("\t------");
    printf("1. Swap Number\n2. Sum Of Digit\n3. Print Prime\n4. Text Palindrom\n5. Num Palindrom\n6. Print Pascal\n");
    pilih=0;
    while(pilih<1||pilih>6)
    {
        printf("Pilih: ");
        scanf("%d",&pilih);
    }
    switch(pilih)
    {
    case 1:
        printf("\tInput angka a: ");scanf("%d",&a);
        printf("\tInput angka b: ");scanf("%d",&b);
        printf("\tSwapNumber(%d,%d) ==> ",a,b);
        swapNumber(&a,&b);printf("a=%d, b=%d\n",a,b);
        break;
    case 2:
        printf("\tInput Digit: ");scanf("%d",&digit);
        printf("\tSumOfDigit(%d) ==> %d",digit,sumofdigits(digit));
        break;
    case 3:
        printf("\tInput Num: ");
        scanf("%d",&num);
        printf("\t");printprime(num);
        break;
    case 4:
        printf("\tInput string: ");
        fflush(stdin);gets(hh);
        printf("\tPalindrom ==> %s\n",texpalindrom(hh)?"true":"false");
        break;
    case 5:
        printf("\tInput Num: ");
        scanf("%d",&num1);
        printf("\tPalindrom ==> %s\n",numpalindrom(num1)?"true":"false");
        break;
    case 6:
        printf("\tInput Baris: ");
        scanf("%d",&row);printf("\n");
        printpascal(row);
        break;
    }
    printf("\n\nke menu[y/other]: ");
    fflush(stdin);scanf("%c",&menu);
    if(menu=='y')
    {
        goto lagi;
    }system("pause");
}
