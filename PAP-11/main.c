#include "pustaka.h"

int main()
{
    int pmb1,pmb2,peny1,peny2;
    char yes;
    ulangi:system("cls");
    puts("\t\tPAP-11");
    puts("\t\t------\n");
    printf("Masukkan bilangan pecahan 1\n");
    printf("input pembilang: ");scanf("%d",&pmb1);
    printf("input penyabut : ");scanf("%d",&peny1);
    printf("\nMasukkan bilangan pecahan 2\n");
    printf("input pembilang: ");scanf("%d",&pmb2);
    printf("input penyabut : ");scanf("%d",&peny2);
    printf("\n\n");

    /// pembilang() dan penyebut()
    printf("pembilang 1 = %d\n",pembilang(makePecahan(pmb1,peny1)));
    printf("penyebut  1 = %d\n",penyebut(makePecahan(pmb1,peny1)));
    printf("pembilang 2 = %d\n",pembilang(makePecahan(pmb2,peny2)));
    printf("penyebut  2 = %d\n",penyebut(makePecahan(pmb2,peny2)));
    printf("\n\n");

    /// addPecahan()
    printPecahan(makePecahan(pmb1,peny1));printf(" + ");printPecahan(makePecahan(pmb2,peny2));
    printf(" = ");printPecahan(addPecahan(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));printf("\n");

    /// subPecahan()
    printPecahan(makePecahan(pmb1,peny1));printf(" - ");printPecahan(makePecahan(pmb2,peny2));
    printf(" = ");printPecahan(subPecahan(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));printf("\n");

    /// mulPecahan()
    printPecahan(makePecahan(pmb1,peny1));printf(" * ");printPecahan(makePecahan(pmb2,peny2));
    printf(" = ");printPecahan(mulPecahan(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));printf("\n");

    /// divPecahan()
    printPecahan(makePecahan(pmb1,peny1));printf(" / ");printPecahan(makePecahan(pmb2,peny2));
    printf(" = ");printPecahan(divPecahan(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));printf("\n");
    printf("\n\n");

    /// isEqual()
    printPecahan(makePecahan(pmb1,peny1));printf(" = ");printPecahan(makePecahan(pmb2,peny2));
    printf(" ? %d\n",isEqual(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));

    /// isBigger()
    printPecahan(makePecahan(pmb1,peny1));printf(" > ");printPecahan(makePecahan(pmb2,peny2));
    printf(" ? %d\n",isBigger(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));

    /// isSmaller()
    printPecahan(makePecahan(pmb1,peny1));printf(" < ");printPecahan(makePecahan(pmb2,peny2));
    printf(" ? %d\n",isSmaller(makePecahan(pmb1,peny1),makePecahan(pmb2,peny2)));

    printf("\nUlangi [Y | other]: ");fflush(stdin);scanf("%c",&yes);
    if(yes=='y')
    {
        goto ulangi;
    }
    return 0;
}
