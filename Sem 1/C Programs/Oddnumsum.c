/* 17.11.21 Q3- Enter 10 numbers from keyboard and count numbers of odd numbers and find their sum*/

#include<stdio.h>


int main()
{
    int i,n,c=0,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("enter number %d: ",i);
        scanf("%d",&n);
        if(n%2!=0)
        {
            c++;
            sum=sum+n;
        }

    }

    printf("%d odd nos and their sum is %d",c,sum);
    return 0;
}