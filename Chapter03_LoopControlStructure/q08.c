/*
Write a program to receive an integer and find its octal equivalent.
*/

#include <stdio.h>

int main ()
{
    int num, rem;
    int octal = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        rem = num%8;
        octal = 10 * octal + rem;
        num /= 8;
    }

    while(octal != 0)
    {
        rem = octal % 10;
        reverse = 10 * reverse + rem;
        octal /= 10;
    }

    printf("The octal value of the given number is: %d\n",reverse);
    
    return 0;
}