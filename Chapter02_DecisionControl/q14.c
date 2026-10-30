/*
Any Character is entered through the keyboard.
Write a program to determine whether the character entered is a capital letter,
small case letter, a digit or a special symbol.
*/

#include <stdio.h>

int main ()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 65 && c <=90)
    {
        printf("It is a Upper case letter\n");
    }

    else if (c >= 97 && c <= 122)
    {
        printf("It is a Lower case letter\n");
    }

    else if (c >= 48 && c <= 57)
    {
        printf("It is a Digit\n");
    }

    else if ((c >= 0 && c <= 47) ||
            (c >= 58 && c <= 64) ||
            (c >= 91 && c <= 96) ||
            (c >= 123 && c <= 127))
    {
        printf("It is a Special Character\n");
    }

    else
    {
        printf("Character is outside the specified ASCII ranges\n");
    }

    return 0;
}