// Write a menu driven program for the following matrix operations:-
// a. Multiplication of two matrix
// b. Sum of the upper triangular matrix 
// c. The sum of each row and column of a matrix.
// d. Check the sparse matrix
// e. Interchange diagonals of a matrix.
#include<stdio.h>
#include<stdlib.h>
void mu(int**b760,int**a760,int n760){
    int s[n760][n760];
    for(int i=0;i<n760;i++){
        for(int j=0;j<n760;j++){
            s[i][j]=0;
            for(int k=0;k<n760;k++)s[i][j]+=(a760[i][k]*b760[k][i]);
        }
    }
    printf("The product of two matrices are:\n");
    for(int i=0;i<n760;i++){
        for(int j=0;j<n760;j++){
            printf("%d ",s[i][j]);
        }printf("\n");
    }
}
void sd(int**a760,int n760){
    int s=0;
    for(int i=0;i<n760;i++)for(int j=0;j<n760;j++)if(j>i)s+=a760[i][j];
    printf("The sum of the upper triangular matrix: %d\n",s);
}
void c(int**a760,int n760){
    int b760[n760],d[n760];
    for(int i=0;i<n760;i++){
        for(int j=0;j<n760;j++)if(i==j)b760[i]=a760[i][j];
        d[i]=a760[i][n760-i-1];
        for(int j=0;j<n760;j++)if(i==j)a760[i][j]=d[i];
        a760[i][n760-i-1]=b760[i];
    }
    printf("The matrix after interchanging the diagonals:\n");
    for(int i=0;i<n760;i++){
        for(int j=0;j<n760;j++){
            printf("%d ",a760[i][j]);
        }printf("\n");
    }
}
void rc(int**a760,int n760){
    int s[n760],v760[n760];
    for(int i=0;i<n760;i++){s[i]=0;v760[i]=0;}
    for(int i=0;i<n760;i++)for(int j=0;j<n760;j++){s[i]+=a760[i][j];v760[i]+=a760[j][i];}
    printf("The sum of rows of the matrix:\n");
    for(int i=0;i<n760;i++)printf("%d ",s[i]);
    printf("\n");
    printf("The sum of columns of the matrix:\n");
    for(int i=0;i<n760;i++)printf("%d ",v760[i]);
    printf("\n");
}
void sp(int**a760,int n760){
    int z=0,s=0;
    for(int i=0;i<n760;i++)for(int j=0;j<n760;j++)a760[i][j]==0?z++:s++;
    printf(z>s?"The matrix is a sparse matrix as the number of zeroes is more than the number of non-zero elements of the matrix.\n":"The matrix is not a sparse matrix as the number of zeroes is less than the number of non zero elements of the matrix.\n");
}
void me(int**a760,int**b760,int n760){
    int v760;
    printf("Enter a number assigned for any operation:\n1)Multiplication of two matrices.\n2)Sum of the upper triangular matrix.\n3)The sum of each row and column of a matrix.\n4)Check the sparse matrix.\n5)Interchange diagonals of a matrix.\n");
    scanf("%d",&v760);
    if(v760==1)mu(a760,b760,n760);
    else if(v760==2){
        printf("Adding the upper triangle elements of the first matrix:\n");
        sd(a760,n760);
        printf("Adding the upper triangle elements of the second matrix:\n");
        sd(b760,n760);
    }else if(v760==3){
        printf("Getting the sum of row and columns of the first matrix:\n");
        rc(a760,n760);
        printf("Getting the sum of row and columns of the second matrix:\n");
        rc(b760,n760);
    }else if(v760==4){
        printf("Checking if the first matrix sparse:\n");
        sp(a760,n760);
        printf("Checking if the second matrix sparse:\n");
        sp(b760,n760);
    }else if(v760==5){
        printf("Changing diagonals for the first matrix:\n");
        c(a760,n760);
        printf("Changing diagonals for the second matrix:\n");
        c(b760,n760);
    }else{
        printf("Invalid number.\n");
        int d760;
        printf("Do you want to continue the program?\nEnter 1 for YES and 0 for NO:\n");
        scanf("%d",&d760);
        (d760==1)?me(a760,b760,n760):printf("End of the program, to perform the operations run the program again.\nThank You!");
    }
}
int main(){
    int n760,v760,d760;
    printf("Enter the number of rows and columns:\n");
    scanf("%d",&n760);
    int**a760=malloc(n760*sizeof(int)),**b760=malloc(n760*sizeof(int));
    for(int i=0;i<n760;i++){a760[i]=malloc(n760*sizeof(int));b760[i]=malloc(n760*sizeof(int));}
    printf("Enter the elements of the matrix 1:\n");
    for(int i=0;i<n760;i++)for(int j=0;j<n760;j++)scanf("%d",&a760[i][j]);
    printf("Enter the elements of the matrix 2:\n");
    for(int i=0;i<n760;i++)for(int j=0;j<n760;j++)scanf("%d",&b760[i][j]);
    me(a760,b760,n760);
    printf("Do you want to continue the program?\nEnter 1 for YES and 0 for NO:\n");
    scanf("%d",&d760);
    if(d760==1){
        me(a760,b760,n760);
        printf("End of the program, to perform the operations run the program again.\nThank You!");
    }else printf("End of the program, to perform the operations run the program again.\nThank You!");
    return 0;
}