/*Q 19.01.22 Allocate n elements dynamically to a pointer variable, asign data and find sum of all n elements using pointer variable*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p,s=0;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        s+=*(p+i);
    }
    printf("The sum of the elements is:%d",s);
    free(p);
    return 0;
}