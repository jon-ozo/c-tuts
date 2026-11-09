#include <stdio.h>

int main()
{
    int x;

    printf("Type in a number to select a fruit: 1. Apples, 2. Bananas, 3. Oranges:\n");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("Apples\n");
            break;
        case 2:
            printf("Bananas\n");
            break;
        case 3:
            printf("Oranges\n");
            break;
        default:
            printf("Unrecognized value\n");
            break;
    }
    return 0;
}