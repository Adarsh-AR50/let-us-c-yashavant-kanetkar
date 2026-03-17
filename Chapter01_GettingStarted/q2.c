/*
The distance between two cities (in Km) is input through the keyboard.
Write a program to convert and print this distance in meters, feet,
inches and centimeters.
*/

#include <stdio.h>

int main()
{
    float dis, meter, feet, inch, cm;

    printf("Enter the distance (in km): ");
    scanf("%f", &dis);

    meter = dis * 1000;
    feet  = dis * 3280.84;
    inch  = dis * 39370.1;
    cm    = dis * 100000;

    printf("Distance in meters      = %.2f\n", meter);
    printf("Distance in feet        = %.2f\n", feet);
    printf("Distance in inches      = %.2f\n", inch);
    printf("Distance in centimeters = %.2f\n", cm);
    
    return 0;
}