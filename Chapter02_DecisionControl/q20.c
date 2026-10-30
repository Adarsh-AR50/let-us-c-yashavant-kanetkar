/*
The policy floowed by a company to process customer orders
Is given by the following rules:
(a) If a customer order quantity is less than or equal to that in stock and his credit is OK.
    supply his requirement.

(b) if his credit is not OK do not supply. Send him an intimation.

(c) If his credit is OK but the item in stock is less than his order, supply what is in stock.
    Intimate to him the dat on which the balance will ve shipped.

Write a c program to implement the company policy.
*/


#include <stdio.h>

int main()
{
    int order_qty, stock, credit;
    int balance;
    int ship_date;

    printf("Enter the order quantity: ");
    scanf("%d", &order_qty);

    printf("Enter the available stock: ");
    scanf("%d", &stock);

    printf("Is the customer's credit OK? (1 = Yes, 0 = No): ");
    scanf("%d", &credit);

    if (credit == 0)
    {
        printf("Credit is not OK. Order cannot be supplied.\n");
    }

    else if (credit == 1)
    {
        if (order_qty <= stock)
        {
            printf("The complete order will be supplied.\n");
            printf("Quantity supplied: %d\n", order_qty);
        }

        else
        {
            balance = order_qty - stock;

            printf("Available stock will be supplied.\n");
            printf("Quantity supplied: %d\n", stock);
            printf("Balance quantity: %d\n", balance);

            printf("Enter the expected shipping date (DDMMYYYY): ");
            scanf("%d", &ship_date);

            printf("The remaining %d items will be shipped on %d.\n",
                   balance, ship_date);
        }
    }

    else
    {
        printf("Invalid credit status.\n");
    }

    return 0;
}
