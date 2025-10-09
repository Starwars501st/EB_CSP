// EB 6th String Notes

#include <stdio.h>
#include <string.h>

int main(void){

    char name [] = "Eva";
    char last_name[25];
    char fill_name [100];

    printf("Please tell me your name: \n");
    scanf("%s", last_name);

    strcat(name, " ");
    printf("[%s]", name);

    strcat(name, last_name);
    printf("[%s]", name);


    return 0;

}