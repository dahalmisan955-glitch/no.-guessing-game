#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
  int guess, number, attempts = 0;
  srand(time(0));
  number = rand() % 10 +  1;
  do {

    printf("enter your guess between 1 - 10:");
    scanf("%d", &guess);
    if(guess <1 || guess > 10)
    {
        printf("invalid input ");
        continue;
    }
    attempts++;
    if (guess > number)
    {
        printf("too high! try again:\n");

    }
    else if(guess < number )
    {
        printf("too low! try again:\n");
    }
    else {
        printf("Congratulation you guessed the number in %d attempts\n", attempts);
         break;
        }    
    }while (guess != number);
    return 0;
}