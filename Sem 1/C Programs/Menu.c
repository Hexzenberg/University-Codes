/*Q4- 24/11/21 Write a menu driven program which has following options:

1. Factorial of a number.

2. Prime or not

3. Odd or even

4. Exit*/

#include<stdio.h>


int main()
{
    int n,i,f=1,num,count=0;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter your choice(1 factorial of number,2 prime or not, 3 odd or even and 4 to exit): ");
    scanf("%d",&n);
    switch (n)
    {
    case(1):
        i=num;
        while(i>0)
        {
            f=f*i;
            i--;
        }
        printf("\nThe factorial of the number is :%d",f);

        break;

    case(2):
        for(i=1;i<=num;i++)
            if(num%i==0)
                count++;

        if(count==2)
            printf("\nThe number is a prime number");
        else
            printf("\nThe number is a composite number");
        break;

    case(3):
        if(num%2==0)
            printf("\nThis is an even number");
        else
            printf("\nThis is an odd number");
        break;

    case(4):
        break;


    default:
        printf("you have entered a wrong choice");
        break;
    }
    return 0;
}