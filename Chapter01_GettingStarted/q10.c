/*
In a town, the percentage of men is 52.
The percentage of total literacy is 48.
If Total percentage of literate men is 35 of the total population.
Write a program to find the total number of illiterate men and women if the population of the town is 80,000
*/

#include <stdio.h>

int main()
{
    int population = 80000;
    int men, women, lmen, ilmen, lwomen, ilwomen, tliterate; 

    men       = (52 * population) / 100;
    women     = population - men;
    
    lmen      = (35 * population) / 100;
    tliterate = (48 * population) / 100;
    
    lwomen    = tliterate - lmen;
    
    ilmen   = men - lmen;
    ilwomen = women - lwomen;

    printf("No of illiterate men   = %d\n", ilmen);
    printf("No of illiterate women = %d\n", ilwomen);

    return 0;
}