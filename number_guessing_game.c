//programming
/*
Name: EMMANUEL OSORO
Registeration number: PA106/G/28823/25
Description:A C PROGRAM THAT IMPLEMENTS A NUMBER GUESSING GAME
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secretNumber, guess;

    // Seed the random number generator
    srand(time(NULL));
    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    // prompt the user to enter the guess
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 20) {
            printf("Please enter a number between 1 and 20.\n");
            continue;
        }

        if (guess < secretNumber) {
            printf("Too low!\n");
        } else if (guess > secretNumber) {
            printf("Too high!\n");
        } else {
            printf("Congratulations! You've guessed the number %d!\n", secretNumber);
            break;
        }
    }

    return 0;
}