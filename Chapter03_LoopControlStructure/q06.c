/*
Write a program for a matchstick game being played between the computer and a user.
Your program should ensure that the computer always wins.
Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/

#include <stdio.h>

int main()
{
    int matchstick = 21;
    int num, comp_num;

    while (matchstick > 1)
    {
        printf("Enter the number from 1 to 4: ");
        scanf("%d", &num);

        if (num < 1 || num > 4)
        {
            printf("Invalid choice! Pick between 1 and 4.\n");
            continue;
        }

        matchstick -= num;
        printf("%d matchsticks left\n", matchstick);

        if (matchstick == 1)
        {
            printf("You lose! You are forced to pick the last matchstick.\n");
            break;
        }

        comp_num = 5 - num;

        printf("The computer chooses %d matchstick(s).\n", comp_num);
        matchstick -= comp_num;
        printf("%d matchsticks left\n", matchstick);
    }

    return 0;
}