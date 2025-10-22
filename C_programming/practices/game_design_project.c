// EB 6th
// Game Design Project in C Hangman
// I am in charge of loops
// 

/*
------------
|/   |
|   (_)
|   \|/
|    |
|   / \
|
|_____________




#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
    char letters[] = {'a', 'b', 'c', 'd', 'e'};
    srand(time(NULL));
    for(int i=0; i< 10; i++){
    int num = rand() %5;
    int num = rand() %20 +1;
    printf("%d\n", num);
    printf("%c\n", letters[num]);
    }
    return 0;
}

*/ 


// What we have currently.
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main (void){

int rules;
    printf("Would you like to see the rules type 1 for yes type 2 for no? \n");
    scanf("%d", &rules);

    if(rules == "1"){
        printf("Hangman is a game where you have to guess a 5 letter word, you have 7 tries to guess the word or else the man will get hanged!!!, but if you guess the word without making 7 mistakes you will save the man and win!!");
    }
    else{
        printf("Ok you already know the game!");
    }


}
