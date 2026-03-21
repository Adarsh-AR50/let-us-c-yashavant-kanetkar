/*
The length and breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
*/

#include <stdio.h>

int main()
{
    float l, b, r, aor, por, aoc, coc; 
    const float pi = 3.14159;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    aor = l * b;
    por = 2 * (l + b);
    aoc = pi * r * r;
    coc = 2 * pi * r;

    printf("Area of rectangle        = %.2f\n", aor);
    printf("Perimeter of rectangle   = %.2f\n", por);
    printf("Area of circle           = %.2f\n", aoc);
    printf("Circumference of circle  = %.2f\n", coc);

    return 0;
}