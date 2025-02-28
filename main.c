#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main(void)
{
    int number = 100;
    int user_guess;
    int attemps = 0;

    srand(time(NULL));

    int correct_number = rand() % number + 1;

    do {
        do {
            printf("Guess number between 1 and %d: ", number);
            scanf("%d", &user_guess);

            if (user_guess < 1 || user_guess > number) {
                printf("Invalid input! Please enter a number between 1 and %d\n", number);
            }
        } while (user_guess < 1 || user_guess > number);

        attemps++;

        if (user_guess < correct_number) {
            printf("Too low! Try again.\n");
        } else if (user_guess > correct_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You guessed the number %d.\n", correct_number);
        }
    } while (user_guess != correct_number);

    return 0;
}
