/*
If the three side of a triangle are entered throught the keyboard.
Write a program to check whether the triangles is valid or not.
The triangle is valid if the sum of two sides is greater than the largest of the three sides.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d",&a, &b, &c);
        
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side lengths\n");
    }

    else
    {
        if (a >= b && a >= c)
        {
            if ( b + c > a)
            {
                printf("It is a valid triangle\n");
            }

            else 
            {
                printf("It is not a valid triangle\n");
            }
        }

        else if (b >= a && b >= c)
        {
            if ( a + c > b)
            {
                printf("It is a valid triangle\n");
            }

            else 
            {
                printf("It is not a valid triangle\n");
            }
        }

        else 
        {
            if ( a + b > c)
            {
                printf("It is a valid triangle\n");
            }

            else 
            {
                printf("It is not a valid triangle\n");
            }
        }
    }

    return 0;
}