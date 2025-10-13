// EB 6th Old Enough-C

#include <stdio.h>

int main(void){
     int age;

    printf("How old are you: ");
    scanf("%d", &age); // Get user input as integer

    if (age >= 18) {
        printf("You are old enough to vote!\n");
    } else if (age >= 16) {
        printf("You are old enough to drive!\n");
    } else if (age >= 15) {
        printf("You are old enough to get a learner's permit!\n");
    } else if (age >= 5) {
        printf("You are old enough to go to school!\n");
    } else {
        printf("You are not old enough for any of the listed activities.\n");
    }

    return 0;
}