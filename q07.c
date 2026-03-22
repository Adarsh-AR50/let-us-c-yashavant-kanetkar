/*
Write a program to check whether a triangle is valid or not.
When the three angles of a triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;

    printf("Enter the value of Angle1: ");
    scanf("%d", &angle1);

    printf("Enter the value of Angle2: ");
    scanf("%d", &angle2);

    printf("Enter the value of Angle3: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("Triangle is valid\n");
    }

    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}