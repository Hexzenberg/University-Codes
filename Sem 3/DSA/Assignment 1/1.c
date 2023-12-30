// Write a program to divide a 1D array(having 40 elements) to 5 2D array of 2X4 each.
// Pass the 2nd and 4th 2D array to a function. which will swap these two 2-D array in original 1D array.
#include<stdio.h>
#include<stdlib.h>
void td(int(*b)[2][4]){
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<4;k++){
            printf("%d",*(*((*(b+i))+j)+k));
            }printf("\n");
        }printf("\n");
    }
}
void s(int(*b)[8],int(*c)[8]){
    for(int i=0;i<8;i++){
        int t=*(*b+i);
        *(*b+i)=*(*c+i);
        *(*c+i)=t;
    }
}
int main(){
    int*a=(int*)malloc(40*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<40;i++)scanf("%d",&a[i]);
    printf("Matrices in 2x4 form:\n");
    td((int(*)[2][4])a);
    int (*p)[2][4]=(int(*)[2][4])a;
    s((int(*)[8])*p[1],(int(*)[8])*p[3]);
    printf("After swaping the second and the fourth rows:\n");
    td((int(*)[2][4])a);
    return 0;
}

