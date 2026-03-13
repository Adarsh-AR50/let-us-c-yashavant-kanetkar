/*
Ramesh's basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary.
His house rent allowance is 20% of basic salary.
This program calculate the Gross salary.
*/

#include <stdio.h>

int main()
{
    float bs, da, hra, gs;

    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &bs);

    da = 0.4 * bs;
    hra = 0.2 * bs;
    gs = bs + da + hra;
    
    printf("Gross salary = %.2f\n", gs);

    return 0;
}