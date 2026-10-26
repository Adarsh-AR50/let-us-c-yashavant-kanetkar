/*
Write a program to enter the number till the user wants. 
At the end it should display the count of positive, negative and zeros entered.
*/


#include <stdio.h>

int main()
{
    int num;
    int positive = 0, negative = 0, zeros = 0;
    char choice;

    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("The counts are:\n");
    printf("Positive = %d\nNegative = %d\nZeros = %d\n",
           positive, negative, zeros);

    return 0;
}