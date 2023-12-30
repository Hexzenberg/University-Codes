/*16.11.21 Q3- WAP to enter the score of 10 cricket players and count the no. of players scored century. discad the negative score if entered by mistake*/
#include<stdio.h>
int main()
{
    int i=1,count=0,score;
    repeat:
    printf("enter the score of player %d: \n",i);
    scanf("%d",&score);
    if(score<0)
        goto repeat;
    else if(score>=100)
        count++;
    i++;
    if(i<=10)
        goto repeat;
    printf("\n%d number of players scored centuries",count);
return 0;
}
