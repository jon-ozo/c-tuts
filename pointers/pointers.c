#include <stdio.h>

int main()
{
    char *p;
    char str[32] = "Dealing with pointers";

    p = str;

    // printf("%s\n", p);
    // printf("%p\n", (void *)p);

    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(p));

    return 0;
}