/*Q1- write a programme to give 60 marks grace if age is below 50 else give 40 marks grace,i.e. all will get atleast 40 marks grade additional 20 marks will be given if the age is below 50*/

#include <stdio.h>
int main()
{
    int mark, age;

    printf("Enter mark:");
    scanf("%d",&mark);

    printf("\n Enter age:");
    scanf("%d",&age);

    mark=mark+40;
    if(age<50)
            mark=mark+20;

    printf("\n Final mark=%d",mark);
    return 0;
}

