// EB 6th Silly Sentences -C

#include <stdio.h>

int main() {
    char animal[30];
    char place[30];
    char food[30];

    printf("Enter an animal: ");
    scanf("%29s", animal);
    printf("Enter a place: ");
    scanf("%29s", place);
    printf("Enter a type of food: ");
    scanf("%29s", food);

    printf("One day, a %s went to %s to buy some %s.\n", animal, place, food);

    
    return 0;
}