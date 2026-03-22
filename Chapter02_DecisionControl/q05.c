/*
A five-digit is entered through the keyboard.
Write a program to obtain the reversed number 
And to detemine whether the original and reversed numbers are equal or not
*/

#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    temp = num;

    rem = temp % 10;
    sum += rem * 10000;
    temp /= 10;

    rem = temp % 10;
    sum += (rem * 1000);
    temp /= 10;

    rem = temp % 10;
    sum += (rem * 100);
    temp /= 10;

    rem = temp % 10;
    sum += (rem * 10);
    temp /= 10;

    sum += temp;
    
    printf("The reversed number is %d\n", sum);

    if (sum == num)
    {
        printf("Original and reversed number are equal");
    }

    else 
    {
        printf("Original and reversed number are not equal");
    }

    return 0;
}