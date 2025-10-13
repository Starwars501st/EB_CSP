// EB 6th Time Of Day -C

#include <stdio.h>

int main(void){
    
  int hour;

    printf("What is the hour in military time (0-23)? ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid hour. Please enter a number between 0 and 23.\n");
    } else if (hour < 12) {
        printf("Good Morning!\n");
    } else if (hour < 18) {
        printf("Good Afternoon!\n");
    } else {
        printf("Good Evening!\n");

    }


    return 0;
}