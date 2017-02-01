void swapValue(int *num1,int *num2)
{
    int x;
    x=*num1;
    *num1=*num2;
    *num2=x;
}
void changeValue(int *target,int num1,int num2)
{
    *target=num1+num2;
}
void initDynArray(int *arrData,int size)
{
    int i;
    for(i=0;i<size;i++){
        arrData[i]=i+1;
        printf("%d ",arrData[i]);
    }
}
void printArray(int *arrData,int size)
{
    int i;
    for(i=0;i<size;i++){
        if(i==size-1)
            printf("%d",arrData[i]);
        else
            printf("%d - ",arrData[i]);
    }
}
void putAverage(float *avg, int *arrData,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++){
        sum+=arrData[i];
    }
    *avg=(float)sum/size;
}
