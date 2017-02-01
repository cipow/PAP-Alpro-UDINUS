#include "kepala.h"
void swapNumber(int *num1,int *num2)
{
    int num3;
    num3=*num1;
    *num1=*num2;
    *num2=num3;
}
int sumofdigits(int digit)
{
    int i,sum=0;
    for(i=1;i++;)
    {
        if(digit==0){break;}
        sum=sum+digit%10;
        digit/=10;
    }
    return sum;
}
int checkprima(int num)
{
    int i,prima=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            prima++;
        }
    }
    if(prima==2)
    {
        return true;
    }else
    {
        return false;
    }
}
void printprime(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        if(checkprima(i)==true)
        {
            printf("%d ",i);

        }
    }
}
int texpalindrom(char text[])
{
    int i,n,j;
    boolean poli=true;
    n=strlen(text);
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        if(text[i]!=text[j])
        {
            poli=false;
            break;
        }
        j--;
    }
    return poli;
}
int numpalindrom(int num)
{
    int i,j,n,hitung,pindah;
    int simpan[100];
    boolean poli=true;
    i=0;n=0;
    hitung=num;
    while(hitung>0)
    {
        pindah=hitung%10;
        simpan[i]=pindah;
        hitung/=10;
        n++;i++;
    }
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        if(simpan[i]!=simpan[j])
        {
            poli=false;
            break;
        }
        j--;
    }
    return poli;
}
int faktorial(int n)
{
    int i,fak=1;
    for(i=1;i<=n;i++)
    {
        fak*=i;
    }
    return fak;
}
void printpascal(int row)
{
    int i,j,bil,spasi;
    for(i=0;i<=row;i++)
    {
        for(spasi=0;spasi<=(row*2)-(i*2);spasi++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                bil=1;
            }else
            {
                bil=faktorial(i)/(faktorial(i-j)*faktorial(j));
            }
            printf("%5d",bil);
        }
        printf("\n");
    }
}
