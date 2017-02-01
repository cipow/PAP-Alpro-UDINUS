#include "pustaka.h"
pecahan makePecahan(int pemb,int peny)
{
    pecahan x;
    x.pembilang=pemb;
    x.penyebut=peny;
    return x;
}
void printPecahan(pecahan p)
{
    printf("%d/%d",p.pembilang,p.penyebut);
}
int pembilang(pecahan p)
{
    return p.pembilang;
}
int penyebut(pecahan p)
{
    return p.penyebut;
}
pecahan addPecahan(pecahan p1,pecahan p2)
{
    pecahan x;
    if(p1.penyebut==p2.penyebut)
    {
        x.pembilang=p1.pembilang+p2.pembilang;
        x.penyebut=p1.penyebut;
    }
    else
    {
        x.pembilang=(p1.pembilang*p2.penyebut)+(p2.pembilang*p1.penyebut);
        x.penyebut=p1.penyebut*p2.penyebut;
    }
    return x;
}
pecahan subPecahan(pecahan p1,pecahan p2)
{
    pecahan x;
    if(p1.penyebut==p2.penyebut)
    {
        x.pembilang=p1.pembilang-p2.pembilang;
        x.penyebut=p1.penyebut;
    }
    else
    {
        x.pembilang=(p1.pembilang*p2.penyebut)-(p2.pembilang*p1.penyebut);
        x.penyebut=p1.penyebut*p2.penyebut;
    }
    return x;
}
pecahan mulPecahan(pecahan p1,pecahan p2)
{
    pecahan x;
    if(p1.pembilang%p2.penyebut==0)
    {
        p1.pembilang/=p2.penyebut;
        p2.penyebut/=p2.penyebut;
    }
    else if(p2.penyebut%p1.pembilang==0)
    {
        p2.penyebut/=p1.pembilang;
        p1.pembilang/=p1.pembilang;
    }
    if(p2.pembilang%p1.penyebut==0)
    {
        p2.pembilang/=p1.penyebut;
        p1.penyebut/=p1.penyebut;
    }
    else if(p1.penyebut%p2.pembilang==0)
    {
        p1.penyebut/=p2.pembilang;
        p2.pembilang/=p2.pembilang;
    }
    x.pembilang=p1.pembilang*p2.pembilang;
    x.penyebut=p1.penyebut*p2.penyebut;
    return x;
}
pecahan divPecahan(pecahan p1,pecahan p2)
{
    int t;
    t=p2.pembilang;
    p2.pembilang=p2.penyebut;
    p2.penyebut=t;
    return mulPecahan(p1,p2);
}
float desimalPecahan(pecahan p)
{
    return (float)p.penyebut;
}
int isEqual(pecahan p1,pecahan p2)
{
    float a,b;
    a=(float)p1.pembilang/(float)p1.penyebut;
    b=(float)p2.pembilang/(float)p2.penyebut;
    if(a==b)
        return 1;
    else
        return 0;
}
int isBigger(pecahan p1,pecahan p2)
{
    float a,b;
    a=(float)p1.pembilang/p1.penyebut;
    b=(float)p2.pembilang/p2.penyebut;
    if(a>b)
        return 1;
    else
        return 0;
}
int isSmaller(pecahan p1,pecahan p2)
{
    float a,b;
    a=(float)p1.pembilang/p1.penyebut;
    b=(float)p2.pembilang/p2.penyebut;
    if(a<b)
        return 1;
    else
        return 0;
}
