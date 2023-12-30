/* 24.11.21 Q2- WAP for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>
int main()
{
    int m=21,u,c;
    while(m>=1)
    {
        printf("\nTotal Match Sticks:%d\n",m);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d",&u);
        if(u>4)
        {
            printf("Invalid Entry");
            break;
        }
        c=5-u;
        printf("Computer picked up %d Match Sticks",c);
        m=m-u-c;
        if(m==1)
        {
            printf("\nYou have lost against the computer.");
            break;
        }
    }
    return 0;
}