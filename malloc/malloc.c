#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char *name;
    char *p = calloc(1, 32);
    *p = 'What will happen now?';

    printf("%s\n", p);

    // name = malloc(32); // request memory from the OS

    // // printf("%p\n", (void *)name);
    // printf("What is your name? ");
    // scanf(" %s", name);

    // printf("My name is, %s\n", name);

    // free(name);


    
    return 0;
}