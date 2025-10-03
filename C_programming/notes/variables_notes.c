// EB 6th Variables Notes C
#include <stdio.h>

int main(void){
    int num = 4;
    float pi =3.14;
    char grade = 'A'; //will only hold 1 letter
    char name[]= "Eva";
    //bool passing = true
  printf("%d", num);

    return 0;
}
//int = 4 bytes
// float = 4 bytes
// double = 8 bytes
// char = 1 bytes
// char = list of characters for a string
/*
char grade; will hold one letter
bool passing = true
*/
 #include <stdio.h>
 
int main(void){
    int num = 4;
    float pi = 3.14;
    char grade; //Will only hold 1 letter
    char name[20]= "Eva";
    //bool passing = true;
    printf("What is your letter grade: ");
    scanf("%c", &grade);
    // first info your getting is what is the info and the second one is what to do with it.
    printf("Tell me a number: ");
    scanf("%c", &num);
    // the next comment lets you use a space;
    printf("tell me your name:");
    fgets(name, sizeof(name), stdin);
    printf("%d\n", num);
    printf("%s has a %c grade in the class!\n", name, grade);
    return 0;
}


/*



*/

