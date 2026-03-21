/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard.
Write a program to find the cost price of one item.
*/

#include <stdio.h>

int main()
{
    int sp, p, cp;

    printf("Enter the selling price of 15 items: ");
    scanf("%d", &sp);

    printf("Enter the profit: ");
    scanf("%d", &p);

    cp = (sp - p) / 15;

    printf("The cost price of one item = %d", cp);

    return 0;
}