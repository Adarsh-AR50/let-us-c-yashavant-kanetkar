/*
Write a program to receive an integer and find its octal equivalent.
*/

#include <stdio.h>

int main ()
{
    int num, rem;
    int octal = 0;
    int place = 1;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        rem = num % 8;
        octal = octal + rem * place;
        place *= 10;
        num /= 8;
    }

    printf("The octal value of the given number is: %d\n",octal);
    
    return 0;
}