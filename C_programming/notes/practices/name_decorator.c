// EB 6th Name Decorator -C

#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char decorated_name[100] = "<<< ";
    
    printf("Enter your name: ");
    scanf("%s", name);
    strcat(decorated_name, name); 
    strcat(decorated_name, " >>>");

    printf("%s\n", decorated_name);

    return 0;
}