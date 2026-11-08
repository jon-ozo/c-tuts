#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int random_number(int max)
{
    int number;
    number = rand() % max + 1;

    return number;
}

void goto_sleep(int time)
{
    printf("Processing request...\n");
    sleep(time);
    printf("Finished processing request after %d seconds\n", time);
}

int main()
{
    srand(getpid());
    int number = random_number(6);
    printf("%d\n", number);

    // goto_sleep(5);

    return 0;
}