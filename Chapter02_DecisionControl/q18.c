/*
If the three sides of a triangle are entered through the keyboard.
Write a program to check whether the triangle is
Isosceles, equilateral, scalene or right angled triangle.
*/

#include <stdio.h>

int main ()
{
    int a, b, c;

    printf("Enter the three sides of the triangles: ");
    scanf("%d %d %d",&a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && ( a + c > b) && (b + c > a))
    {
       if (a == b && b == c)
        {
            printf("It is an Equilateral triangle\n");
        }

        else if (a == b || a == c || b == c)
        {
            printf("It is an Isosceles triangle\n");
        }

        else
        {
            printf("It is a Scalene triangle\n");
        }

        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
        {
            printf("It is a Right angled triangle\n");
        }
    }

    else
    {
        printf("The triangle is invalid");
    }
    
    return 0;
}