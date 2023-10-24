#include <stdio.h>

union test {
   
    int y;
    char x[20];
  
};
union test t1 = {20,"Anik"};
 
int main() {
    
    

    printf("x=%s\ny=%d\n", t1.x,t1.y);
    printf("sizeof(t1)= %d",sizeof(t1));
   printf("y=%d\nx=%s\n", t1.y,t1.x);
    return 0;
}
