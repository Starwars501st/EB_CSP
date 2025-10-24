// ME EB MA AH 6th team game for c (Max - Conditionals, Eva - loop, Mykel - variable, Ambar - Functions )
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int rules(){
    printf("Would you like to see the rules? Type 1 for yes and type 2 for no.\n");
    scanf("%d", &rules);

    if(rules == 1){
        printf("Your objective is to guess the 5 letter word!\n");
        printf("You get 7 incoorect guesses before the man is hanged!!!\n");
        printf("But if you guess the word without making 7 mistakes you will save the man and win!!\n");
        printf("Good luck and have fun!!!\n");
    }
    else{
        printf("Ok you already know the game! You may continue  \n");
    }
}




// Function to display hangman picture based on remaining attempts.
int showhangman(int attempts){
    switch (attempts){
        case 7:
            printf("    -----\n      |\n      |\n     ---\n");
            break;
        case 6:
            printf("    -----\n  O     |\n      |\n     ---\n");
            break;
        case 5:
            printf("    -----\n  O     |\n  |   |\n     ---\n");
            break;
        case 4:
            printf("    -----\n  O     |\n /|   |\n   |\n     ---\n");
            break;
        case 3:
            printf("    -----\n ");
            break;
        case 2:
            printf("    -----");
            break;
        case 1:
            printf("    -----");
            break;
        case 0:
            printf("    -----");
            break;
        
    }
}

//Function to display what the word looks like from last guess.
void displayWord(const char *word, int guessed[]){ //displayWord is a function. const char * word is what points to the secret word. int guessed[] is an array of intergers that keeps track of which letters have been guessed.
    for (int i=0; i < strlen(word); i++) { //loop that iterates through each letter of the word.
        if(guessed[i]) //if i/character has been guessed.
            printf("%c",word[i]); //For the if above it prints the letter if it was right.
        else
            printf("_"); //if the letter is not in the word than it prints an underscore instead.
    }
    printf("\n");// prints a new line after the word is shown.

//Function to check if the player has won.
int checkWin(const char *word, int guessed[]) { //represents secret word and guessed letters.
    for(int i = 0; word[i] != '\0'; i++) { //loop iterates to find what letters you have guessed. i=0 until it encounters the null terminater \0 which marks end of C string.
        if(!guessed[i]) //check if any of the guesed array is false (0).
            return 0;
    }
    return 1;
}
}

    const char *words[] = { //array of possible words.
        "water", "avoid", "beach", "brave", "chief",
         "daily", "early", "field", "image", "ocean",
          "table", "value", "fruit"
    };
    int numWords = sizeof(words) / sizeof(words[0]); //This calculates the number of words in the words array.
    srand(time(NULL)); //random number generator seed based on current time.
    const char *word = words[rand() % numWords]; //This is what randomly selects one of the words from the array/list.
    int wordLength = strlen(word); //This calculates the length of chosen word.
// Game setup variables below::::::
    int guessed[wordLength]; //array to keep track of guessed letters.
    int attempts = 7; //number of attempts player has (7).
    char guess; //declares variable (guess) to store users letter input.
    for (int i= 0; i< wordLength; i++){ // loop initializes all elments of guseed array to 0, marking all letters in the chosen word as unguessed at the start.
        guessed[i] = 0; 
    }

    printf("Welcome to Hangman!\n");
    showRules();

    // game loop below::::::
    
    while (triesLeft > 0) {
        displayHangman(triesLeft);
        displayWord(word, guessed);

        printf("\nTries left: %d\n", triesLeft);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);
    }

{
while (attempts > 0 && !checkWin(word, guessed)) {
        showHangman(attempts);
        printf("\nWord: ");
        displayWord(word, guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int correct = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 7;
                correct = 7;
            }
        }

        if (correct) {
            printf(" Correct!\n");
        } else {
            printf(" Wrong guess!\n");
            attempts--;
        }
    }

    // Final result
    showHangman(attempts);
    if (checkWin(word, guessed)) {
        printf("\n You saved the man! The word was '%s'!\n", word);
    } else {
        printf("\n The man is hanged! The word was '%s'.\n", word);
    }

    return 0;
}

int main (void){
    
}





/*   at least one variables
int attempts = 7;
char guess;
int guessed[wordLength];
int wordLength = strlen(word);
*/

/* At least two functions
void showRules()         // prints the game instructions
void showHangman(int)    // prints the hangman picture
void displayWord(...)    // shows progress of the guessed word
int checkWin(...)        // checks if the player has guessed all letters
*/

/* At lest one conditional statment 
if (strcmp(answer, "yes") == 0) { ... }     // checks if player wants to see rules
if (correct) { ... } else { ... }            // checks if the letter was guessed correctly
if (checkWin(word, guessed)) { ... }         // checks for win/loss
*/

/* At least one loop
while (attempts > 0 && !checkWin(word, guessed)) { ... }   // main game loop
for (int i = 0; i < wordLength; i++) { ... }               // checks letters
*/