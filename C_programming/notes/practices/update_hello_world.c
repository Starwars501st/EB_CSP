// EB 6th Updated Hello World 

#include <stdio.h>
void sayHello(char name[]);

int main() {

    sayHello("Obi-wan");
    sayHello("Ahsoka");
    sayHello("Anakin");
    sayHello("Luke");
    sayHello("Leia");

    return 0;
}

void sayHello(char name[]) {
    printf("Hello %s!\n", name);
}