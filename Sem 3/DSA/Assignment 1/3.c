// Let us assume a two dimensional array consists of different numbers and each number
// is repeated equal number of times in this array. You need to write a function which will
// rearrange the array where each number will contiguously present in that array. You
// have to create a pointer which will pointing to a row having n number of elements, 
// where n is the number of times each number gets repeated in the original array. Using
// this pointer, you need to display the modified array. Original array
// 2 3 1 4 3 1 2 2 1 3 4 4
// New array
// 1,1,1,2
// ,2,2,3,3
// ,3,4,4,4
// For this example, you have to create a pointer which will point to 3 element row. Using
// this pointer, you have to display
#include<stdio.h>
int n,m;
void s(int*a){
    for(int i=0;i<(n*m)-1;i++){
        for(int j=i+1;j<(n*m);j++){
            if(a[i]>a[j]){
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
}
int main(){
    printf("Enter size of the array(Number of Rows and columns):\n");
    scanf("%d%d",&n,&m);
    int a[n][m],c=0,x=1;
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[0][0]==a[i][j])c++;
        }
    }
    s(*a);
    int(*b)[c]=(int(*)[c])a;
    printf("New array:\n");
    for(int i=0;i<(n*m)/c;i++){
        for(int j=0;j<c;j++,x++){
            printf("%d ",*(*(b+i)+j));
            if(x%m==0)printf("\n");
        }
    }
    return 0;
}
