/*
If a five-digit number is input through the keyboard.
Write a program to reverse the given number.
*/

#include <stdio.h>

int main()
{
    int num, rem, rev = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    rem = num % 10;
    rev += rem * 10000;
    num /= 10;

    rem = num % 10;
    rev += rem * 1000;
    num /= 10;

    rem = num % 10;
    rev += rem * 100;
    num /= 10;

    rem = num % 10;
    rev += rem * 10;
    num /= 10;

    rem = num % 10;
    rev += rem;

    printf("Reversed number = %d\n", rev);

    return 0;
}