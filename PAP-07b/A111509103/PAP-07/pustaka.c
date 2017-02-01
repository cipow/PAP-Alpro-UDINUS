int addRec(int num1,int num2)
{
    if(num2==0)
        return num1;
    else
        return 1+addRec(num1,num2-1);
}
int subsRec(int num1,int num2)
{
    if(num2==0)
        return num1;
    else
        return -1+subsRec(num1,num2-1);
}
int mulRec(int num1,int num2)
{
    if(num2==0)
        return 0;
    else
        return num1+mulRec(num1,num2-1);
}
int divRec(int num1,int num2)
{
    if(num1<num2)
        return 0;
    else
        return 1+divRec(num1-num2,num2);
}
int powRec(int num1,int num2)
{
    if(num2==0)
        return 1;
    else
        return num1*powRec(num1,num2-1);
}
int factorial(int number)
{
    if(number==0)
        return 1;
    else
        return number*factorial(number-1);
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
void fibonacci(int number)
{
    if(number>1)
        fibonacci(number-1);
    printf("%d ",fibo(number));
}
int sumTraversal(int data[],int cur)
{
    if(data[cur]==0)
        return 0;
    else
        return data[cur]+sumTraversal(data,cur+1);
}
void paddRec(int num1,int num2)
{
    if(num2==0)
    {
        printf("%d",num1);
    }
    else
    {
        printf("1 + ");
        paddRec(num1,num2-1);
    }
}
void psubsRec(int num1,int num2)
{
    if(num2==0)
    {
        printf("+ %d",num1);
    }
    else
    {
        printf("- 1 ");
        psubsRec(num1,num2-1);
    }
}
void pmulRec(int num1,int num2)
{
    if(num2==1)
    {
        printf("%d",num1);
    }
    else
    {
        printf("%d + ",num1);
        pmulRec(num1,num2-1);
    }
}
void pdivRec(int num1,int num2)
{
    if(num1>num2)
    {
        printf("- %d ",num2);
        pdivRec(num1-num2,num2);
    }
}
void ppowRec(int num1,int num2)
{
    if(num2==1)
    {
        printf("%d",num1);
    }
    else
    {
        printf("%d x ",num1);
        ppowRec(num1,num2-1);
    }
}
void pfakto(int number)
{
    if(number==1)
    {
        printf("%d",number);
    }
    else
    {
        printf("%d x ",number);
        pfakto(number-1);
    }
}
