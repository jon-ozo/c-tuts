#include <stdio.h>

int main()
{
    int speed;

    printf("How fast are you driving? (in km/h): ");
    scanf("%d", &speed);

    if (speed < 40)
    {
        printf("You are driving too slow.\n");
    }
    else if (speed >= 40 && speed <= 60)
    {
        printf("You are driving at a safe speed.\n");
    }
    else
    {
        printf("You are driving too fast.\n");
    }

    return 0;
}