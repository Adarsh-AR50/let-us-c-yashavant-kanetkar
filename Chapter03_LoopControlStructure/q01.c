/*
Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour.
*/

#include <stdio.h>

int main()
{
    int hours, i;
    float overtime;

    for (i=1; i<=10; i++)
    {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);

        if (hours > 40)
        {
            overtime = (hours - 40) * 12.0;
        }

        else 
        {
            overtime = 0.00;
        }

        printf("Overtime pay for employee %d = Rs. %.2f\n\n", i, overtime);
    }

    return 0;
}