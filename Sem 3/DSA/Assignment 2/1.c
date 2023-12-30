// Write a function to search an element in an arraylist and delete that element in that arraylist.
// (You need to create the arraylist inside the structure).
#include<stdio.h>
#include<stdlib.h>
struct al{
    int m,n,*a;
};
void s(struct al*p,int b){
    int c;
    for(int i=0;i<p->m;i++)if(p->a[i]==b){c=i;break;}
    printf((c<=b)?("The element was present at the index: %d\nThe array after deletion:\n"):("The element is not present in the arraylist.\nAnd the array is:\n"),c+1);
    for(int i=0;i<p->m;i++)if(p->a[i]!=b)printf("%d ",p->a[i]);
}
int main(){
    struct al*p; 
    int b;
    printf("Enter the size of the array:\n");
    scanf("%d",&p->n);
    p->a=malloc(p->n*sizeof(int));
    printf("Enter the usable size of the arraylist:\n");
    scanf("%d",&p->m);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->m;i++)scanf("%d",&p->a[i]);
    printf("Enter a element to search for:\n");
    scanf("%d",&b);
    s(p,b);
    return 0;
}