//Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100
#define Min 1
int main(){
    int number, guess, attempts = 1, max_attempts = 7;
    srand(time(NULL));
    number = rand() % (Max - Min + 1) + Min;
// Generate a random number between 1 and 100
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", Min, Max);
    printf("You have %d attempts.\n\n", max_attempts);
    printf("Enter your guess: ");
    scanf("%d", &guess);
    while(number != guess)
    {
     if(guess < Min || guess > Max){
        printf("Please enter a number between %d and %d.\n", Min, Max);
        }
        else if(guess < number){
            printf("Guess a number higher than %d\n", guess);
            attempts++;
            if(number-guess<=10){
                printf("Hint: You're close!\n");
            }
        }
        else{
            printf("Guess a number lower than %d\n", guess);
            attempts++;
            if(guess-number<=10){
                printf("Hint: You're close!\n");
            }
        }
         if(attempts>max_attempts){
        printf("\nGame Over!.\nThe correct number was: %d\n", number);
        break;
    }
    printf("Guess again:");
     scanf("%d", &guess);
    }
    if(number == guess){
        printf("Congratulations! You guessed the correct number: %d in %d attempts.\n", number, attempts);
    }
    return 0;
}