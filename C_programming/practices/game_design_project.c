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
    printf("Would you like to see the rules? Type 1 for yes and type 2 for no.\n");
    scanf("%d", &rules);

    if(rules == 1){
        printf("Hangman is a game where you have to guess a 5 letter word, you have 7 tries to guess the word or else the man will get hanged!!!, but if you guess the word without making 7 mistakes you will save the man and win!!");
    }
    else{
        printf("Ok you already know the game! You may continue");
    }


void displayWord(char word[], int guessed[]);
int checkWin(int guessed[], int wordLength);
void displayHangman(int triesLeft);

int main() {
   
    char word[] = "computer"; 
    int wordLength = strlen(Word);
    int guessed[20] = {0}; /
    int triesLeft = 6;     
    char guess;
    int correctGuess;

    printf("===================================\n");
    printf("       Welcome to hangman!\n");
    printf("===================================\n");
    printf("Try to guess the word.\n");
    printf("You have %d tries.\n\n", triesLeft);

    while (triesLeft > 0) {
        displayHangman(triesLeft);
        displayWord(secretWord, guessed);

        printf("\nTries left: %d\n", triesLeft);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        correctGuess = 0; 

        for (int i = 0; i < wordLength; i++) {
            if (tolower(secretWord[i]) == guess && guessed[i] == 0) {
                guessed[i] = 1;
                correctGuess = 1;
            }
        }
       
        if (!correctGuess) {
            printf("\nWrong guess!\n");
            triesLeft--;
        } else {
            printf("\nGood guess!\n");
        }

    
        if (checkWin(guessed, wordLength)) {
            printf("\n Congratulations! You guessed the word: %s\n", secretWord);
            break;
        }
    }

    if (triesLeft == 0) {
        displayHangman(triesLeft);
        printf("\n Game over! The word was: %s\n", secretWord);
    }

    return 0;
}
void displayWord(char word[], int guessed[]) {
    printf("\nWord: ");
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int checkWin(int guessed[], int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (guessed[i] == 0)
            return 0;
    }
    return 1;
}

void displayHangman(int triesLeft) {
    printf("\n");
    switch (triesLeft) {
        case 6:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 5:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 4:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 3:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf(" /|   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 2:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf(" /|\\  |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 1:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf(" /|\\  |\n");
            printf(" /    |\n");
            printf("      |\n");
            printf("=========\n");
            break;
        case 0:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  0   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf("      |\n");
            printf("=========\n");
            break;
    }
}
}