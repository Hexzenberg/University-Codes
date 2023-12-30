// July 28,2022
// WAP that will sum the surrounding elements of a given index in a matrix.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,b,c,s=0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&n,&m);
    int**a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)a[i]=malloc(m*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
    printf("Enter the desired indices:\n");
    scanf("%d%d",&b,&c);
    if(c==0&&b==0)s=a[0][1]+a[1][0]+a[1][1];
    else if(c==m-1&&b==0)s=a[0][m-2]+a[1][m-2]+a[1][m-1];
    else if(c==0&&b==n-1)s=a[n-2][0]+a[n-2][1]+a[n-1][1];
    else if(c==m-1&&b==n-1)s=a[n-2][m-1]+a[n-2][m-2]+a[n-1][m-2];
    else if(c==0){
        s+=a[b][1];
        for(int i=b-1;i<=b+1;i++)if(i!=b)for(int j=0;j<2;j++)s+=a[i][j];
    }else if(b==0){
        s+=(a[b][c-1]+a[b][c+1]);
    }else if(c==m-1){
        s+=a[b][m-2];
        for(int i=b-1;i<=b+1;i++)if(i!=b)for(int j=0;j<2;j++)s+=a[i][c-j-1];
    }else if(b==n-1){
        s+=(a[b][c-1]+a[b][c+1]);
        for(int j=c-1;j<=c+1;j++)s+=a[b-1][j];
    }else{
        for(int i=b-1;i<=b+1;i++){
            if(i==b)s+=(a[i][c-1]+a[i][c+1]);
            else for(int j=c-1;j<=c+1;j++)s+=a[i][j];
        }
    }
    printf("The desired sum is: %d\n",s);
    return 0;
}
