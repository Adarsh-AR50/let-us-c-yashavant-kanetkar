/*
In a company, worker efficiency is determined on the basis of the time required
for a worker to complete a particular job.
If the time taken by the worker is between 2 - 3 hours, then the worker is said to be higly efficient.
If the time required by the worker is between 3 - 4 hours, then the woker is ordered to improve speed.
If the time taken is between 4 -5 hours, the worker is given training to improve his speed
And if the time taken by the worker is move than 5 hours, then the worker has to leave the company.
If the time taken by the worker is input through the keyboard.
Write a program to find the efficiency of the worker.
*/

#include <stdio.h>

int main ()
{
    float hours;

    printf("Enter the time taken to complete the task: ");
    scanf("%f", &hours);

    if (hours >= 2 && hours <= 3)
    {
        printf("Highly efficient\n");
    }

    else if (hours > 3 && hours <= 4)
    {
        printf("Improve your speed\n");
    }

    else if (hours > 4 && hours <= 5)
    {
        printf("You have to train for improvement\n");
    }

    else if (hours > 5)
    {
        printf("You have to leave the company\n");
    }

    else
    {
        printf("Time is outside the specified range.\n");
    }

    return 0;
}