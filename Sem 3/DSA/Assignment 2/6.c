// Write a program to remove repeated elements in a given array.
#include<stdio.h>
#define max 100
struct al{
    int n,a[max];
}typedef al;
void d(al*p,int b){
    for(int i=0;i<p->n;i++)if(i==b)for(int j=i;j<p->n-1;j++)p->a[j]=p->a[j+1];
    p->n--;
}
int main(){
    al p;
    printf("Enter the usable size of array:\n");
    scanf("%d",&p.n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.n;i++)scanf("%d",&(p.a[i]));
    for(int i=0;i<p.n;i++){
        for(int j=i+1;j<p.n;j++){
            if(p.a[j]==p.a[i]){
                d(&p,j);
                j--;
            }
        }
    }
    printf("The array after deleting repeated elements:\n");
    for(int i=0;i<p.n;i++)printf("%d ",p.a[i]);
    return 0;
}
