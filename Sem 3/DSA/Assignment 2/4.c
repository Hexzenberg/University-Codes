// In a one dimensional array delete all even numbers present in the array.
#include<stdio.h>
#include<stdlib.h>
struct al{
    int m,n,*a;
}typedef al;
void s(al*p){
    printf("Array after removing all even elements:\n");
    for(int i=0;i<p->m;i++)if(p->a[i]%2!=0)printf("%d ",p->a[i]);
}
int main(){
    al*p;
    printf("Enter the size of the array:\n");
    scanf("%d",&p->n);
    p->a=malloc(p->n*sizeof(int));
    printf("Enter the usable size of the arraylist:\n");
    scanf("%d",&p->m);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->m;i++)scanf("%d",&p->a[i]);
    s(p);
    return 0;
}