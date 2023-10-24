#include<stdio.h>?

int main()
{
    int a[6]={10,25,74,87,65,87,85};
    int *p;

     p= &a[0];
    for(int i=0; i<6 ; i++)
    {
         printf("%d\n",*p);
         p++;
    }
}