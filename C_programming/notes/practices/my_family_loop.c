// EB 6th My Family Loop.c

#include <stdio.h>

int main() {

    char *family[] = {"Mom", "Dad", "Sister", "Brother", "Grandma"};
    int size = sizeof(family) / sizeof(family[0]);
    for (int i = 0; i < size; i++) {
        printf("Hello, %s!\n", family[i]);
    }

    return 0;
}