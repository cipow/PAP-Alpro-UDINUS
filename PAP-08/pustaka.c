int min2(int num1,int num2)
{
    if(num1<num2)
        return num1;
    else
        return num2;
}
int max2(int num1,int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
int recMax(int data[],int cur,int arrSize)
{
    if(cur==arrSize-1)
        return data[cur];
    else
        return max2(recMax(data,cur+1,arrSize),data[cur]);
}
int recMin(int data[],int cur,int arrSize)
{
    if(cur==arrSize-1)
        return data[cur];
    else
        return min2(recMin(data,cur+1,arrSize),data[cur]);
}
void recPrintAll(int data[],int cur,int arrSize)
{
    if(cur==arrSize-1)
    {
        printf("%d",data[cur]);
    }
    else
    {
        printf("%d - ",data[cur]);
        recPrintAll(data,cur+1,arrSize);
    }
}
float recMean(int data[],int cur,int n)
{
    if(cur==n-1)
        return data[cur];
    else if(cur>0)
        return data[cur]+recMean(data,cur+1,n);
    else
        return (data[cur]+recMean(data,cur+1,n))/n;
}
void recSelectionSort(int data[],int arrSize)
{
    int i,t,max;
    max=arrSize-1;
    for(i=arrSize-2;i>=0;i--)
    {
        if(data[i]>data[max])
            max=i;
    }
    t=data[arrSize-1];
    data[arrSize-1]=data[max];
    data[max]=t;
    if(arrSize>0)
        recSelectionSort(data,arrSize-1);
}
