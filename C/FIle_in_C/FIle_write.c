#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    char s1[20];
    int id;
    char u[20];
    
    f = fopen("text.txt", "w");

    if (f == NULL) {
        printf("File could not be opened\n");
    } else {
        printf("File is created\n");
        printf("Enter your Name: ");
        fgets(s1, sizeof(s1), stdin);
        s1[strcspn(s1, "\n")] = '\0';  // Remove the newline character
        
        printf("Enter your ID: ");
        scanf("%d", &id);
        fflush(stdin);  // Clear the input buffer
        
        printf("Enter your University Name: ");
        fgets(u, sizeof(u), stdin);
        u[strcspn(u, "\n")] = '\0';  // Remove the newline character
        
        fprintf(f, "%s %d %s", s1, id, u);
        fputs("\n", f);
        fclose(f);
    }
    
    return 0;
}

