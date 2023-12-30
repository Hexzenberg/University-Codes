/*Q 19.01.22 Allocate & assign dynamically 2D Array ([n][5]) where column size is fixed to 5 to a pointer and find sum of all elements*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,s=0,(*a)[5];
    printf("Enter the number of rows:");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    for(i=0;i<n;i++){
        for(j=0;j<5;++j){
            scanf("%d",&*(*(a+i)+j));
            s+=*(*(a+i)+j);
        }
    }
    printf("sum = %d",s);
    return 0;
}
