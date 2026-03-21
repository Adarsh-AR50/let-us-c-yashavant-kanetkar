/*
If cost price and selling price of an item are input through the keyboard.
Write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
*/

#include <stdio.h>

int main()
{
    int cp, sp, amount; 

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        amount = sp - cp;
        printf("The seller made a profit of %d\n", amount);
    }

    else if (cp > sp)
    {
        amount = cp - sp;
        printf("The seller incurred a loss of %d\n", amount);
    }

    else 
    {
        printf("No profit, no loss\n");
    }

    return 0;
}