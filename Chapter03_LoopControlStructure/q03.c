/*
Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    double num3;

    printf("Enter the number 1: ");
    scanf("%d", &num1);

    printf("Enter the number 2: ");
    scanf("%d", &num2);

    num3 = pow(num1, num2);

    printf("The result is: %.01f", num3);

    return 0;
}