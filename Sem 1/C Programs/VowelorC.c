/* 16.11.21 Q5- WAP tp read a character from the user and test it weather its a vowel or constant or not an alphabet*/

#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character: \n");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
            printf("vowel");
        else
            printf("consonant");
    }
    else
        printf("not an alphabet");

}