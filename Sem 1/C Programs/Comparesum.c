/*Q 11.01.22*/
#include<stdio.h>
int comsum(int *a, int *b,int n)
{
    int i,s1=0,s2=0;
    for(i=0;i<n;i++){
       s1+=a[i];
       s2+=b[i];
    }
    return(s1==s2?0:s1>s2?1:2);
}
int main()
{
    int x[5];int y[5],n;
    printf("enter the number till which we have to compare:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&x[i]);
       scanf("%d",&y[i]);
    }
    printf("%d", comsum(x,y,n));
    return 0;
}


