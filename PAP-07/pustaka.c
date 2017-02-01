#include "pustaka.h"
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
