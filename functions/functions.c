#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int randomnumber(int max)
{
    int number;
    number = rand() % max + 1;

    return number;
}

void gotosleep(int time)
{
    printf("Processing request...\n");
    sleep(time);
    printf("Finished processing request after %d seconds\n", time);
}

int main()
{
    srand(getpid());
    int number = randomnumber(6);
    printf("%d\n", number);

    // gotosleep(5);

    return 0;
}