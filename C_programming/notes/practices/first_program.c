// EB 6th First Program C

#include <stdio.h>

int main() {
    char name[15]; 

    printf("Please enter your name: ");
    
    fgets(name, sizeof(name), stdin);
    printf("Hello, %sWelcome to your first C program.\n", name);

    return 0;
}