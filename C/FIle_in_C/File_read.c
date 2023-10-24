#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    char s1[20];
    int id;
    
    
    f = fopen("text.txt", "r");

    if (f == NULL) {
        printf("File could not be opened\n");
    } else {
        printf("File is created\n");
        
        while(!feof(f))
        {
           //s1 = fgetc(f);//
           //fgets(s1,19,f);//
           fscanf(f,"%s",s1);
           printf("%s",s1);
        }
        fputs("\n", f);
        fclose(f);
    }
    
    return 0;
}