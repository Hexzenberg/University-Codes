// Write a program that will pass a two dimensional array to a function. The called
// function has to return middle row/s to the main function.
#include<stdio.h>
int n,m;
int*r(int(*b)[m]){
    if(n%2==0)return(*(b+n/2-1));
    else return(*(b+n/2));
}
int main(){
    printf("Enter size of the array(Number of Rows and columns):\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter elements of the matrix\n");
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
    int *p=r(a);
    printf("The middle row(s):\n");
    if(n%2!=0)for(int i=0;i<m;i++)printf("%d ",*(p+i));
    else for(int i=0;i<2*m;i++){printf("%d ",*(p+i));if(i==(m-1))printf("\n");}
    return 0;
}