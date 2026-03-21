/*
If a five-digit number is input through the keyboard.
write a program to calculate the sum of its digits.
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;
    num /= 10;

    sum += num % 10;

    printf("Sum of digits = %d\n", sum);

    return 0;
}