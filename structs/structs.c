#include <stdio.h>
#include <string.h>

/**
 * Structs - Enables grouping of primitive(inbuilt) types to form a custom type.
 */

struct person
{
    char first_name[8];
    char last_name[32];
    int age;
};

struct node
{
    int data;
    char ref[8];
};


int main()
{
    struct person individual;

    strncpy(individual.first_name, "John", 7);
    strncpy(individual.last_name, "Ozoemena", 31);
    individual.age = 36;

    // printf("%s %s is %d years old.\n", 
    //     individual.first_name,
    //     individual.last_name, 
    //     individual.age
    // );

    struct node root;

    root.data = 20;
    strncpy(root.ref, "null", 7);

    printf("The root node contains: %d and %s\n", root.data, root.ref);

    return 0;
}