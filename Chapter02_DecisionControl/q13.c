/*
Any year is entered through the keyboard.
Write a program to determine whether the year is leap or not.
Use the logical operators && and ||.
*/

#include <stdio.h>

int main ()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("This is a Leap year\n");
    }

    else
    {
        printf("This is not a Leap Year\n");
    }

    return 0;
}