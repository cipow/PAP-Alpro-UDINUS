#include "pustaka.h"

int countArray(int data[])
{
    int i,cont=0;
    i=0;
    while(data[i]!=NULL)
    {
        cont++;i++;
    }
    return cont;
}
int cekUrut(int data[])
{
    boolean urut=true;
    int i,n;
    n=countArray(data);
    for(i=0;i<n-1;i++)
    {
        if(data[i+1]<data[i])
        {
            urut=false;
            break;
        }
    }
    return urut;
}
void bubelsort1(int data[])
{
    int i,j,n,temp,cetak;
    n=countArray(data);
    for(cetak=0;cetak<n;cetak++)
    {
        printf("%d ",data[cetak]);
    }printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(data[j+1]<data[j])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
        for(cetak=0;cetak<n;cetak++)
        {
            printf("%d ",data[cetak]);
        }
        printf("\n");
    }
}
void bubelsort2(int data[])
{
    int i,j,n,temp,cetak;
    n=countArray(data);

    if(cekUrut(data)==true)
    {
        for(cetak=0;cetak<n;cetak++)
        {
            printf("%d ",data[cetak]);
        }printf("\n");
    }else
    {
        for(cetak=0;cetak<n;cetak++)
        {
            printf("%d ",data[cetak]);
        }printf("\n");

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(data[j+1]<data[j])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
            for(cetak=0;cetak<n;cetak++)
            {
                printf("%d ",data[cetak]);
            }
            printf("\n");
            if(cekUrut(data)==true)
            {
                break;
            }
        }
    }
}
