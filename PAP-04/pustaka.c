#include "pustaka.h"
void compressArray(int data[])
{
    int i,j,t;
    i=0;while(i<max-1)
    {
        for(j=0;j<max-i-1;j++)
        {
            if(data[j]==0)
            {
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
        i++;
    }
    i=0;
    while(data[i]!=0)
    {
        printf("%d ",data[i]);
        i++;
    }
}
void selectionSort1(int data[])
{
    int i,j,k,min,t;
    i=0;
    while(data[i]!=0)
    {
        min=i;j=i+1;
        while(data[j]!=0)
        {
            if(data[j]<data[min])
            {
                min=j;
            }j++;
        }
        t=data[i];data[i]=data[min];data[min]=t;
        k=0;
        while(data[k]!=0)
        {
            printf("%d ",data[k]);
            k++;
        }
        printf("\n");i++;
    }
}
int uruts(int data[])
{
    int i,urut;
    urut=1;i=0;
    while(data[i+1]!=0)
    {
        if(data[i]>data[i+1])
        {
            urut=0;
            break;
        }
        i++;
    }
    return urut;

}
void selectionSort2(int data[])
{
    int i,j,k,min,t;
    i=0;
    while(data[i]!=0)
    {
        min=i;j=i+1;
        while(data[j]!=0)
        {
            if(data[j]<data[min])
            {
                min=j;
            }j++;
        }
        t=data[i];data[i]=data[min];data[min]=t;
        k=0;
        while(data[k]!=0)
        {
            printf("%d ",data[k]);
            k++;
        }
        printf("\n");
        if(uruts(data)==1)
        {
            break;
        }
        i++;
    }
}
int getMedian(int data[])
{
    int i,j,min,t;
    i=0;
    while(data[i]!=0)
    {
        j=i+1;min=i;
        while(data[j]!=0)
        {
            if(data[j]<data[min])
            {
                min=j;
            }j++;
        }
        t=data[i];data[i]=data[min];data[min]=t;
        i++;
    }
    return data[i/2];
}
