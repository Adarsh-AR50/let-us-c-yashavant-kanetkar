/*
Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.
*/

#include <stdio.h>

int main()
{
    float fah, cel;

    printf("Enter the temperature (in Fahrenheit): ");
    scanf("%f", &fah);

    cel = (fah - 32.0) * (5.0 / 9.0);

    printf("Temperature in Celsius = %.2f", cel);
    
    return 0;
}

