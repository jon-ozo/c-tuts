// while, do-while and for loops
#include <stdio.h>
#include <unistd.h>
#include <assert.h>

#define F fflush(stdout);

int guessinggame()
{
    int number, numofguesses, rightanswer;
    numofguesses = 5;
    rightanswer = 2;

    printf("You have %d guesses to guess the right number between 1 and 10\n", numofguesses);
    
    printf("Guess the number: ");
    scanf("%d", &number);

    while(numofguesses > 1)
    {
        if (number < 1 || number > 10)
        {
            printf("Invalid input. Please enter a number between 1 and 10\n");
        }

        else if (number == rightanswer)
        {
            printf("You guessed right! The answer is %d\n", rightanswer);
            return 0;
        }

        else
        {
            numofguesses--;
            printf("Wrong guess! Try again\n");
            printf("You have %d guesses left\n", numofguesses);
            printf("Guess the number: ");
            scanf("%d", &number);
        }
    }

    printf("You have no more guesses left! The answer is %d\n", rightanswer);

    return 0;
}

// do-while loop example
int guessing_game_refactored()
{
    int number, numofguesses, rightanswer;
    numofguesses = 5;
    rightanswer = 2;

    printf("You have %d guesses to guess the right number between 1 and 10\n", numofguesses);
   
    do 
    {
        printf("Guess the number: ");
        scanf("%d", &number);

        if (number < 1 || number > 10)
        {
            printf("Invalid input. Please enter a number between 1 and 10\n");
        }

        else if (number == rightanswer)
        {
            printf("You guessed right! The answer is %d\n", rightanswer);
            return 0;
        }
        else
        {
            numofguesses--;

            if (numofguesses == 0)
            {
                printf("Wrong guess!\n");
            }
            else
            {
                printf("Wrong guess! Try again.\n");
                printf("You have %d guesses left\n", numofguesses);
            }
        }
    }

    while(numofguesses >= 1);

    printf("You have no more guesses left! The answer is %d\n", rightanswer);
    
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

// for loop
void multiply(int i, int number)
{
    int result;

    result = i * number;
    printf("%d x %d = %d\n", i, number, result);

    return;
}

void for_loop()
{
    int i, number, table = 12;
    
    printf("Provide a number from 0-12 to view its multiplication table: "); F;
    scanf("%d", &number);
    assert((number <= table) && (number > 0));

    for (i = 0; i <= table; i++)
        multiply(i, number);

    return;
}

int main()
{
    // guessing_game();
    // guessing_game_refactored();
    // count_down();
    // count_down_v2(20);
    for_loop();

    return 0;
}