#include<stdio.h>
int Increment (int A[])
{
  int size = sizeof(A)/sizeof(A[0]);
  printf("%d  %d\n",sizeof(A),sizeof(A[0]));
  for(int i=0; i<5; i++)
  {
    printf("%d ",A[i]);
  }
  
}
int main()
{
    int num [] = { 10,20,30,40,50};
    Increment(num);
    printf("\n%d",sizeof(num));