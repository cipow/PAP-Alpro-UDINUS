int sequentSearch(int angka, int data[])
{
    int i;
    while(data[i]!=0 && data[i]!=angka)
    {
        i++;
    }
    if(data[i]==angka)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int isInverse(int list1[],int list2[])
{
    int i,n,j,ketemu=1;
    i=0;while(list2[i]!=0)
    {
        i++;
    }n=i;j=n-1;
    for(i=0;i<n;i++)
    {
        if(list1[i]!=list2[j])
        {
            ketemu=0;
            break;
        }
        j--;
    }
    return ketemu;
}
void minMax(int data[],int *min, int *max)
{
    int i;
    *min=data[0];
    *max=data[0];
    i=0;while(data[i]!=0)
    {
        if(data[i]<*min)
        {
            *min=data[i];
        }
        if(data[i]>*max)
        {
            *max=data[i];
        }
        i++;
    }
}
int minMaxGap(int data[])
{
    int i,min,max;
    min=data[0];
    max=data[0];
    i=0;while(data[i]!=0)
    {
        if(data[i]<min)
        {
            min=data[i];
        }
        if(data[i]>max)
        {
            max=data[i];
        }
        i++;
    }
    return max-min;
}
int atLeast(char huruf, int jml, char teks[])
{
    int i,n=0;
    i=0;while(teks[i]!='\0')
    {
        if(teks[i]==huruf||teks[i]==huruf-32)
        {
            n++;
        }
        i++;
    }
    if(n==jml)
    {
        return 1;
    }else
    {
        return 0;
    }
}
