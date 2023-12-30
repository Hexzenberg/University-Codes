// In a one dimensional array insert one or more element at a
// particular position of an array. Ex: Given array: 1 2 3 4 5 6 7 8 9 insert 15 17 19 at the 5
// the position of the given array. Output: 1,2,3,4,15,17,18,5,6,7,8,9
// You can apply the realloc to increase the size of the array if necessary.
#include<stdio.h>
#include<stdlib.h>
#define max 100
struct al{
    int n,a[max];
}typedef al;
void in(al*x,al*y,int p){
    if(x->n+y->n>max||p>=x->n)printf("Cannot insert.\n");
    else{
        for(int i=0;i<y->n;i++)for(int j=0;j<x->n-p+1;j++)x->a[x->n+i-j]=x->a[x->n+i-j-1];
        for(int i=p-1;i<p-1+y->n;i++) x->a[i]=y->a[i-(p-1)];
        x->n+=y->n;
    }
}
int main(){
    al x,y;
    int p;
    printf("Enter the usable size of the array:\n");
    scanf("%d",&x.n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<x.n;i++) scanf("%d",&(x.a[i]));
    printf("Enter the number of elements for insertion:\n");
    scanf("%d",&y.n);
    printf("Enter the elements that are needed to be inserted:\n");
    for(int i=0;i<y.n;i++) scanf("%d",&(y.a[i]));
    printf("Enter the position where you want to insert the elements:\n");
    scanf("%d",&p);
    in(&x,&y,p);
    printf("The array after insertion:\n");
    for(int i=0;i<x.n;i++) printf("%d ",x.a[i]);
    return 0;
}
