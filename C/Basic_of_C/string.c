#include<stdio.h>
#include<string.h>
int main()
{

 char s1[50],ch;

 printf("Enter any String=");
 gets(s1);

  int i=0,small=0,capital=0,Digit=0;

  while((ch=s1[i]) != '\0')
  {
    if(ch>=65 && ch<=90)
    {
        capital++;
    }
    else if(ch>=97 && ch<=122)
    {
        small++;
    }
    else if(ch>=48 && ch<=57)
    {
        Digit++;

    }
    i++;
  }

  printf("%d %d %d ",capital,small,Digit);

}