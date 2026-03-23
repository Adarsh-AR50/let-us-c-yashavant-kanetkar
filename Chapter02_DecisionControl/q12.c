/*
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or on the origin, viz. (0, 0).
*/

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the coordinates of a point (x y): ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("It lies on origin.");
    }

    else if (y == 0)
    {
        printf("It lies on X-axis.");
    }

    else if (x == 0)
    {
        printf("It lies on Y-axis.");
    }

    else
    {
        printf("It does not lie on any axis.");
    }

    return 0;
}