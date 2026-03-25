/*
Write a program to print out all Armstrong numbers between 1 and 500.
If the sum of each digit raised to the power of the number of digit
is equal to the number itself, Then the number is called an Armstrong number.
*/

#include <stdio.h>
#include <math.h>
    
int main()
{
    int n, temp, rem;
    int sum, count;
        
    for (n = 1; n <= 500; n++)
    {
        temp  = n;
        count = 0;
        sum   = 0;
    
        while (temp > 0)
        {
            temp /= 10;
            count++;
        }
    
        temp = n;
    
        while (temp > 0 )
        {
            rem = temp % 10;
            sum = sum + (int)pow(rem, count);
            temp /= 10;
        }
            
        if (n == sum)
        {
            printf("%d\n", n);
        }
    }
        
    return 0;
}
