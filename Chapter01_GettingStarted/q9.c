/*
If a four-digit number is input through the keyboard.
Write a program to obtain the sum of the first and last digit of this number.
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the 4-digit number: ");
    scanf("%d", &num);

    sum += num % 10;
    sum += num / 1000;

    printf("Sum = %d\n", sum);

    return 0;
}