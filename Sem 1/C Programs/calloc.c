#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s=0,i,j,n,(*p)[5];
    printf("Enter the number of rows:");
    scanf("%d",&n);
    p=(int(*)[5])calloc(n*5,sizeof(int));
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            scanf("%d",&*(*(p+i)+j));
            s+=*(*(p+i)+j);
        }
    }
    printf("The sum:%d",s);
    return 0;
}