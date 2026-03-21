/*
If a five-digit number is input through the keyboard.
Write a program to print a new number by adding one to each of its digits.
Fot example, if the number that is input is 12391.
Then the output should be displayed as 23502.
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num1);

    num2 = num1 + 11111;

    printf("New number = %d", num2);

    return 0;
}