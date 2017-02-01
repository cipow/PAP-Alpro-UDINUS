#include "pustaka.h"
int main()
{
    int pilih,num1,num2,number,i;
    char y;
    lagi:system("cls");
    int data[50]={0};
    puts("\tPAP-07");
    puts("\t------");
    printf("1. addRec\n2. subsRec\n3. mulRec\n4. divRec\n5. powRec\n6. factorial\n7. fibonacci\n8. sumTraversal\n");
    pilih=0;
    while(pilih<1||pilih>8)
    {
        printf("Pilih: ");
        scanf("%d",&pilih);
    }
    switch(pilih)
    {
    case 1:
        printf("\tInput num1 dan num2\n");
        printf("\tnum1: ");scanf("%d",&num1);
        printf("\tnum2: ");scanf("%d",&num2);
        printf("\taddRec(%d,%d) --> %d\n",num1,num2,addRec(num1,num2));
        printf("\t");paddRec(num1,num2);
        break;
    case 2:
        printf("\tInput num1 dan num2\n");
        printf("\tnum1: ");scanf("%d",&num1);
        printf("\tnum2: ");scanf("%d",&num2);
        printf("\tsubsRec(%d,%d) --> %d\n",num1,num2,subsRec(num1,num2));
        printf("\t");psubsRec(num1,num2);
        break;
    case 3:
        printf("\tInput num1 dan num2\n");
        printf("\tnum1: ");scanf("%d",&num1);
        printf("\tnum2: ");scanf("%d",&num2);
        printf("\tmulRec(%d,%d) --> %d\n",num1,num2,mulRec(num1,num2));
        printf("\t");pmulRec(num1,num2);
        break;
    case 4:
        printf("\tInput num1 dan num2\n");
        printf("\tnum1: ");scanf("%d",&num1);
        printf("\tnum2: ");scanf("%d",&num2);
        printf("\tdivRec(%d,%d) --> %d\n",num1,num2,divRec(num1,num2));
        printf("\t");pdivRec(num1,num2);
        break;
    case 5:
        printf("\tInput num1 dan num2\n");
        printf("\tnum1: ");scanf("%d",&num1);
        printf("\tnum2: ");scanf("%d",&num2);
        printf("\tpowRec(%d,%d) --> %d\n",num1,num2,powRec(num1,num2));
        printf("\t");ppowRec(num1,num2);
        break;
    case 6:
        printf("\tInput number\n");
        printf("\tnumber: ");scanf("%d",&number);
        printf("\tfactorial(%d) --> %d\n",number,factorial(number));
        printf("\t");pfakto(number);
        break;
    case 7:
        printf("\tInput number\n");
        printf("\tnumber: ");scanf("%d",&number);
        printf("\t");fibonacci(number);
        break;
    case 8:
        printf("\tmasukkan nilai 0 untuk berhenti\n");
        i=0;do{
            printf("\t");
            scanf("%d",&data[i]);
            i++;
        }while(data[i-1]!=0);
        printf("\tsumTraversal(data,0) --> %d",sumTraversal(data,0));
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
