/*16.11.21 Q6- WAP to cheak weather a year is a leap year or not.*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if(year%400==0){
        printf("Leap year");
    }else{
        if(year%100==0){
            printf("Not leapyear\n");
    }else{
        if(year%4==0){
            printf("leapyear");
        }else{
            printf("Not leapyear");
        }
    }
    }
return 0;
}