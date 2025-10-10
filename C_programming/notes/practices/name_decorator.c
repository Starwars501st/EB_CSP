// EB 6th Name Decorator -C

#include <stdio.h>
#include<string.h>

int main (void){

    char name [50];
    printf("What is your name?:");
    scanf(name, sizeof(name), stdin);
    printf("[%s]", name);
    strcat(">>>>> %s <<<<<",name );

    return 0;
}