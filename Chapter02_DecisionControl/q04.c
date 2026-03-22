/*
Any integer is input through the keyboard. 
Write a program to find out whether it is an odd number or even number.
*/

#include <stdio.h>

int main()
{
    int year, total_days, leap_years, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    total_days = (year - 1) * 365;

    leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    total_days += leap_years;

    day = total_days % 7;

    switch (day)
    {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}