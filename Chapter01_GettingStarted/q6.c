/*
Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.
*/

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the value of C: ");
    scanf("%d", &num1);

    printf("Enter the value of D: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After interchange, C = %d\n", num1);
    printf("After interchange, D = %d\n", num2);
    
    return 0;
}