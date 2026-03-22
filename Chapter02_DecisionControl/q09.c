/*
Given the length and breadth of a rectangle, Write a program to find whether the area of the rectangle is greater than its perimeter.
For example the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/

#include <stdio.h>

int main()
{
    int l, b, p, a;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    p = 2 * (l + b);
    a = l * b;

    if (a > p)
    {
        printf("Area is greater than the perimeter");
    }

    else if (a == p)
    {
        printf("Area is equal to the perimeter");
    }

    else
    {
        printf("Perimeter is greater than the Area");
    }

    return 0;
}