#include <stdio.h>
#include <string.h>

/**
 * Structs - Enables grouping of primitive(inbuilt) types to form a custom type.
 */

struct person
{
    char firstname[8];
    char lastname[32];
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

    strncpy(individual.firstname, "John", 7);
    strncpy(individual.lastname, "Ozoemena", 31);
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