/*
A cashier has currency notes of denominations 10, 50 and 100
If the amount to be withdrawn is input through the keyboard in hundreds.
Find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/

#include <stdio.h>

int main()
{
    int amount, h, f, t;

    printf("Enter the withdrawn amount: ");
    scanf("%d", &amount);

    amount *= 100;

    h = amount / 100;
    amount %= 100;

    f = amount / 50;
    amount %= 50;

    t = amount / 10;

    printf("No of hundreds = %d\n", h);
    printf("No of fifty    = %d\n", f);
    printf("No of tens     = %d\n", t);
    
    return 0;
}