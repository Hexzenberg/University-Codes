/*Q1 7.12.21*/
#include <stdio.h>
int max_count(int n)
{
    int next_num,i,largest=0,count=0;
    for(i=0;i<n;i++)
    {
        printf("\nEnter next_num:");
        scanf("%d",&next_num);
        if(next_num>largest){
            largest=next_num;
            count++;
        }
        printf("\nThe largest numner is %d",largest);
        printf("\nThe count is %d",count);
    }
    return (largest,count);
}
int main ()
{

    int a,g,d;
    printf("Enter the number:");
    scanf("%d",&a);
    max_count(a);
    return 0;
}