/*
Write a program to find the factorial value of any number entered through the keyboard.
*/

#include <stdio.h>

int main()
{
    int num, i;
    int fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers");
    }

    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %d", num, fact);
    }

    return 0;
}