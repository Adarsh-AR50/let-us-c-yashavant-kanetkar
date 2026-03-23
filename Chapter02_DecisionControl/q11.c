/*
Given the coordinates (x, y) of a center of a circle and its radius.
Write a program which will determine whether a point lies inside the circle, on the circle or outside the circle.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float h, k, r;
    float x, y;
    float distance;

    printf("Enter center (h k): ");
    scanf("%f %f", &h, &k);

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter point (x y): ");
    scanf("%f %f", &x, &y);

    distance = sqrt(pow(x - h, 2) + pow(y - k, 2));

    if (distance < r)
    {
        printf("Point is inside the circle\n");
    }
    else if (fabs(distance - r) < 0.0001)
    {
        printf("Point is on the circle\n");
    }
    else
    {
        printf("Point is outside the circle\n");
    }

    return 0;
}