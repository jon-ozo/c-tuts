#include <stdio.h>
#include <unistd.h>

int guessing_game()
{
    int number, num_of_guesses, right_answer;
    num_of_guesses = 5;
    right_answer = 2;

    printf("You have %d guesses to guess the right number between 1 and 10\n", num_of_guesses);
    
    printf("Guess the number: ");
    scanf("%d", &number);

    while(num_of_guesses > 1)
    {
        if (number < 1 || number > 10)
        {
            printf("Invalid input. Please enter a number between 1 and 10\n");
        }

        else if (number == right_answer)
        {
            printf("You guessed right! The answer is %d\n", right_answer);
            return 0;
        }

        else
        {
            num_of_guesses--;
            printf("Wrong guess! Try again\n");
            printf("You have %d guesses left\n", num_of_guesses);
            printf("Guess the number: ");
            scanf("%d", &number);
        }
    }

    printf("You have no more guesses left! The answer is %d\n", right_answer);

    return 0;
}

// do-while loop example
int guessing_game_refactored()
{
    int number, num_of_guesses, right_answer;
    num_of_guesses = 5;
    right_answer = 2;

    printf("You have %d guesses to guess the right number between 1 and 10\n", num_of_guesses);
   
    do 
    {
        printf("Guess the number: ");
        scanf("%d", &number);

        if (number < 1 || number > 10)
        {
            printf("Invalid input. Please enter a number between 1 and 10\n");
        }

        else if (number == right_answer)
        {
            printf("You guessed right! The answer is %d\n", right_answer);
            return 0;
        }
        else
        {
            num_of_guesses--;

            if (num_of_guesses == 0)
            {
                printf("Wrong guess!\n");
            }
            else
            {
                printf("Wrong guess! Try again.\n");
                printf("You have %d guesses left\n", num_of_guesses);
            }
        }
    }

    while(num_of_guesses >= 1);

    printf("You have no more guesses left! The answer is %d\n", right_answer);
    
    return 0;
}

int count_down()
{
    int count = 10;

    while(count > 0)
    {
        printf("%d\n", count);
        count--;      
    }

    printf("BOOM!!\n");

    return 0;
}

// count down enhanced
void count_down_v2(int count)
{
    while (count > 0)
    {
        printf("%d\n", count);
        count--;
        sleep(1);
    }

    printf("BOOM!!\n");
}

int main()
{
    // guessing_game();
    // guessing_game_refactored();
    // count_down();
    count_down_v2(20);

    return 0;
}