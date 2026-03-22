/*
If the ages of Ram, Shyam and Ajay are input through the keyboard
Write a program to determine the youngest of the three.
*/

#include <stdio.h>

int main()
{
    int Ram, Shyam, Ajay;

    printf("Enter the age of Ram: ");
    scanf("%d", &Ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &Shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &Ajay);

    if (Ram == Shyam && Shyam == Ajay)
    {
        printf("All have the same age");
    }
    
    else if (Ram == Shyam && Ram < Ajay)
    {
        printf("Ram and Shyam are youngest");
    }
    
    else if (Ram == Ajay && Ram < Shyam)
    {
        printf("Ram and Ajay are youngest");
    }
    
    else if (Shyam == Ajay && Shyam < Ram)
    {
        printf("Shyam and Ajay are youngest");
    }
    
    else if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is youngest");
    }

    else if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is youngest");
    }

    else
    {
        printf("Ajay is youngest");
    }

    return 0;
}