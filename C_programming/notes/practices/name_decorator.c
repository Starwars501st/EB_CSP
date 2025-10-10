// EB 6th Name Decorator -C

#include <stdio.h>
int main (void){

    char name [25];

    printf("What is your name?")
    char name[50];
    char decoration[50];
    char decorated_name[100];
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    printf("Enter a decoration <<<<<< >>>>>> ");
    fgets(decoration, sizeof(decoration), stdin);

    decoration[strcspn(decoration, "\n")] = '\0';
    printf("<<<<< decorated_name >>>>>");

    return 0;

}
