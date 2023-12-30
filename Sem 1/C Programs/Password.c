/* 10.11.21 Q5- WAP for user name == 'a' password == '12345'. cheak wheather username and password are correct or not1*/

#include<stdio.h>
int main()
{
    char user;
    int pass;
    printf("enter the username: ");
    scanf("%c",&user);
    if(user=='a')
    {
        printf("Username available\n");
        printf("\nenter password: ");
        scanf("%d",&pass);
        {
        if(pass==12345)
            printf("LOGIN SUCCESSFULL\n");
        else
            printf("WRONG PASSWORD. LOGIN FAILED\n");
        }
    }
    else
        printf("Username is incorrect, try again");
    return 0;
}
