#include <stdio.h>

// Accept string input from user and output to the console
int printuserinput(){
    char name[2];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}

// Accept integer input from user and output to the console
int addinput()
{
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

int areaofcircle()
{
    float radius, PI, area;
    PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = radius * radius * PI;

    printf("The area of the circle is %f\n", area);

    return 0;

}

int areaoftriangle()
{
    int base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    area = (base * height) / 2;

    printf("The area of the triangle is %d\n", area);

    return 0;
}

int main()
{
    // printuserinput();
    // addinput();
    // areaofcircle();
    areaoftriangle();

    return 0;
}