#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Hello, World!\nbleh");

    srand((unsigned) time(NULL));
    int guessThisNumber = rand()%40;
    int playerGuessedThis = -1;
    char inputString[100];
    printf("I'm thinking of a number.\n");
        while (guessThisNumber != playerGuessedThis){
            printf("Guess the number please: ");
            gets(inputString);
             playerGuessedThis = atoi(inputString);
            if(playerGuessedThis > guessThisNumber){printf("Sorry, too high.\n");}
            if(playerGuessedThis < guessThisNumber){printf("Sorry, too low.\n");}
            if(playerGuessedThis == guessThisNumber){printf("you got it. woot woot.");}



        }
    return 0;
}
