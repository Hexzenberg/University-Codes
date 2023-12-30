// In a one dimensional array find out all the elements and their
// position, which is the summation of its immediate previous
// contiguous elements. Ex: Given array: 2 9 6 3 9 8 17 3 6 4 13 5
// Output: output is 9, which is a summation of it’s previous elements 3 and 6
// // output is 13, which is a summation of it’s previous elements 4,6 and 3.
#include<stdio.h>
#include<stdlib.h>
struct al{
    int n,*a,m;
}typedef al;
void f(al p){
    int s=0,b=0;
    for(int i=1;i<p.m;i++){
        if(p.a[i-1]<=p.a[i])for(int j=i-1;(p.a[j])<(p.a[i]);j--)s+=p.a[j];
        if(s==p.a[i]){
            printf("Position of the element in the array: %d and the element is: %d which is a sum of %d",i+1,p.a[i],p.a[i-1]);
            for(int j=i-2;(p.a[j])<(p.a[i]);j--)printf(",%d",p.a[j]);
            printf("\n");
            b++;
        }s=0;
    }
}
int main(){
    al p;
    printf("Enter the size of the array:\n");
    scanf("%d",&p.n);
    printf("Enter the usable size of the array:\n");
    scanf("%d",&p.m);
    p.a=malloc(p.n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.m;i++)scanf("%d",&(p.a[i]));
    f(p);
    return 0;
}

