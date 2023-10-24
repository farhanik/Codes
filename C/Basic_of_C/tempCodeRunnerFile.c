#include <stdio.h>

int fact(int n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}
int fibo(int n)
{
    if(n>=3)
    {
        return fibo(n-1) + fibo(n-2);
    }
    else
    {
        return 1;
    }
}
int inorder(int n,int limit)
{
    if(n<=limit)
    {
        printf("%d ",n);
        inorder(n + 1 , limit);
    }
    else
    {
        return 0;
    }
}
int reverse(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        reverse(n-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    //int result = fact(5);
    //printf("%d\n", result);
    int limit;
    printf("Enter Limit = ");
    scanf("%d",&limit);
    inorder(1,limit);
     // reverse(5);
    return 0;
}
