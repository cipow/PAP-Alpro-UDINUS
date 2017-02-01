int binarySearch(int angka,int data[])
{
    int i,j,l,r,n,m,t;
    n=0;while(data[n]!=0)
    {
        n++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(data[j+1]<data[j])
            {
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
    l=0;r=n-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(angka==data[m])
        {
            return 1;
        }else if(angka<data[m])
        {
            r=m-1;
        }else
        {
            l=m+1;
        }
    }return 0;
}
int searchWord(char word[],char text[])
{
    int i,n,sama,j,n1;
    n=0;
    while(word[n]!='\0')
    {
        n++;
    }
    i=0;while(text[i]!='\0')
    {
        n1=i;sama=1;
        for(j=0;j<n;j++)
        {
            if(word[j]==text[n1] || word[j]==text[n1]-32 || word[j]==text[n1]+32)
            {
                sama=1;
            }else
            {
                sama=0;break;
            }n1++;
        }
        if(sama==1)
        {
            break;
        }
        i++;
    }
    return sama;
}
