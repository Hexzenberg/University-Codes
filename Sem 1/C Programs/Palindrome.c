/* 17.11.21 Q7- pallendrom question*/

#include<stdio.h>

int main()
{
    int num,a,rev=0;
    printf("\n Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        rev=a+rev*10;
        num=num/10;
    }
    printf("\n The reversed number is %d",rev);
    {
        if(num==rev)
            {printf("\n Both are equal");
            }
        else
            {
            printf("\n Number and its reverse is not equal");
            }
    }
    return 0;
}