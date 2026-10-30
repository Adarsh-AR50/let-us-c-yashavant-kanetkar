/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6 - 10 days fine is one rupee and above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return the book
and display the fine or the appropriate message.
*/

#include <stdio.h>

int main ()
{
    int days;
    float fine;

    printf("Enter the number of days the member is late: ");
    scanf("%d", &days);

    if (days <= 0)
    {
        printf("Invalid number of days\n");
    }

    else if (days <= 5)
    {
        fine = days * 0.5;
        printf("The member has to pay the fine of %.2f rupees\n", fine);
    }

    else if (days >= 6 && days <= 10)
    {
        fine = days * 1;
        printf("The member has to pay the fine of %.2f rupees\n", fine);
    }

    else if (days >= 11 && days <= 30)
    {
        fine = days * 5;
        printf("The member has to pay the fine of %.2f rupees\n", fine);
    }

    else
    {
        printf("Membership has been cancelled\n");
    }

    return 0;
}