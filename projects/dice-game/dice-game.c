#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * requirements: 
 * - Initialize the game
 *  -- the game starts only if the player has money in their account.
 *  -- if the player has money in their account, they can start playing the game.
 *  -- if the player has no money in their account, they can make a deposit to start playing he game.
 * 
 * - How to play the game
 *  -- place bet
 *  -- roll a dice to get a number between 1 and 6
 * 
 * - Game rules
 *  -- if the number is 6, the player wins and gets a 50% bonus on their deposit
 *  -- if the number is below 6, the player loses and their deposit is deducted
 */

int check_account_balance(int *balance)
{
    if (*balance < 10)
        return 0;
    
    return 1;
}

int roll_dice(int highest_number)
{
    int random_number = rand() % highest_number + 1;

    return random_number;
}

int game_start(int *balance) 
{
    int HIGHEST_NUMBER = 6;
    int stake;
    int initial_balance = *balance;
    char response;

    printf("You have $%d in your account. How much would you like to stake? ", *balance);
    scanf("%d", &stake);

    if (stake < 10)
    {
        printf("You can only stake from '$10' and above.\n");
        return 1;
    }
    if (stake > *balance)
    {
        printf("You can not stake higher than your current balance.\n");
        return 1;
    }

    do {
        printf("Roll dice? (y/n): ");
        scanf(" %c", &response);
    
        if (response == 'y')
        {
            int dice_roll = roll_dice(HIGHEST_NUMBER);
    
            if (dice_roll < HIGHEST_NUMBER)
            {
                *balance -= stake;
                printf("You rolled a %d. You lose your stake of $%d. Your new balance is $%d.\n", dice_roll, stake, *balance);
            }
            else
            {
                printf("You won! You rolled a %d so you get 50%% bonus on your deposit.\n", dice_roll);
                *balance += stake * 0.5;
                printf("Your new balance is $%d.\n", *balance); 
            }
        }
        else if (response == 'n')
        {
            if (initial_balance < *balance)
            {
                printf("Great game. Enjoy your winnings!\n");
                break;
            }
            else
            {
                printf("Until next time.\n");
                break;
            }
        }
        else
        {
            printf("Invalid option. Game exited!\n");
        }
    }

    while (*balance >= stake);

    printf("Sorry! You do not have sufficient funds to continue the game.\n");

    return 0;
}

int make_deposit(int *balance)
{
    int deposit;

    printf("Make a deposit of '$1000' and above: ");
    scanf("%d", &deposit);

    if (deposit < 1000)
    {
        printf("You need to deposit at least $1000 to play the game.\n");
    }
    else
    {
        *balance += deposit;
        game_start(balance);
    }

    return 0;
}

int init_game(int *balance)
{
    char response;

    if (check_account_balance(balance)) {
        game_start(balance);
    }
    else {
        printf("You do not have sufficient funds in your account. Please make a deposit to start playing the game.\n");
        printf("Would you like to make a deposit? Type 'y' for yes or 'n' for no: ");
        scanf(" %c", &response);
        
        if (response == 'y')
            make_deposit(balance);
        
        else if (response == 'n')
            printf("You have chosen not to make a deposit. You cannot play the game without money in your account.\n");
        
        else
            printf("Invalid input. Please type 'y' for yes or 'n' for no.\n");
    }

    return 0;
}

int main()
{
    srand(getpid());
    int balance = 0;
    
    init_game(&balance);

    return 0;
}