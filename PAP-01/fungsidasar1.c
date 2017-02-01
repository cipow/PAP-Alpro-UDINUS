#include "kepala.h"
int iskabisat(int year)
{
    if(year%4==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int hitungvokal(char text[])
{
    int i=0,vokal=0;
    strlwr(text);
    while(text[i]!='\0')
    {
        if(text[i]=='a'||text[i]=='u'||text[i]=='i'||text[i]=='e'||text[i]=='o')
        {
            vokal++;
        }
        i++;
    }
    return vokal;
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
void charFrequency(char text[])
{
    int i,idx,data[26];
    char a;
    for(i=0;i<26;i++)
    {
        data[i]=0;
    }
    i=0;while(text[i]!='\0')
    {
        idx=0;a=65+32;
        while(idx<26)
        {
            if(text[i]==a||text[i]==a-32)
            {
                break;
            }idx++;a++;
        }
        data[idx]++;
        i++;
    }
    i=0;a=65+32;
    while(i<26)
    {
        if(data[i]!=0)
        {
            printf("'%c' = %d",a,data[i]);
            printf("\n");
        }
        i++;a++;
    }
}

void diamond(int row)
{
    int i,j,k,l;
    for(i=1;i<=row;i++)
    {
        for(j=row;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("\04");
        }
        for(l=1;l<i;l++)
        {
            printf("\04");
        }
        printf("\n");
    }
    for(i=1;i<row;i++)
    {
        for(j=1;j<i+1;j++)
        {
            printf(" ");
        }
        for(k=row-1;k>i;k--)
        {
            printf("\04");
        }
        for(l=row-1;l>=i;l--)
        {
            printf("\04");
        }
        printf("\n");
    }
}
