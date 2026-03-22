/*
A five-digit number is entered through the keyboard.
Write a program to obtain the reversed number 
And to determine whether the original and reversed numbers are equal or not
*/

#include <stdio.h>

int main()
{
    int 

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    temp = num;

    rem = temp % 10;
    sum += rem * 10000;
    temp /= 10;

    rem = temp % 10;
    sum += rem * 1000;
    temp /= 10;

    rem = temp % 10;
    sum += rem * 100;
    temp /= 10;

    rem = temp % 10;
    sum += rem * 10;
    temp /= 10;

    sum += sum;

    if (sum == temp)
    {
        printf("Original and reversed numbers are equal");
    }

    else 
    {
        printf("Original and reversed numbers are not equal");
    }

    return 0;
}