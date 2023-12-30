// In a one dimensional array, user gives a certain range of index with
// shifting value. You need to right shift and rotate those range of
// values based on the given shifting value. Do the same for left shift. Given array: 2 9 6 3 5 8 11 3 6 7 13 5
// Given range: 4th index to 9th index(consider the starting index is 0) and shifting value is 2
// Output: 2,9,6,3,6,7,5,8,11,3,13,5
// Given array: 2,9,6,3,5,8,11,3,6,7,13,5
// Given range: 2nd index to 8th index(consider the starting index is 0) and shifting value is 4
// Output: 2,9,8,11,3,6,6,3,5,7,13,5
#include<stdio.h>
#define max 100
struct al{
    int n,a[max];
}typedef al;
void r(al *p,int s,int e,int v){
    for(int i=0;i<v;i++){
        int t=p->a[e];
        for(int j=e;j>s;j--)p->a[j]=p->a[j-1];
        p->a[s]=t;
    }
}
void l(al *p,int s,int e,int v){
    for(int i=0;i<v;i++){
        int t=p->a[s];
        for(int j=s;j<e;j++)p->a[j]=p->a[j+1];
        p->a[e]=t;
    }
}
int main(){
    int s,e,v;
    al p,d;
    printf("Enter the usable size of array:\n");
    scanf("%d",&p.n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.n;i++)scanf("%d",&(p.a[i]));
    d=p;
    printf("Enter the starting and ending index and the shifting value:\n");
    scanf("%d%d%d",&s,&e,&v);
    r(&p,s,e,v);
    printf("The array after right shifting\n");
    for(int i=0;i<p.n;i++)printf("%d ",p.a[i]);
    printf("\n");
    l(&d,s,e,v);
    printf("The array after left shifting\n");
    for(int i=0;i<p.n;i++)printf("%d ",p.a[i]);
    printf("\n");
    return 0;
}
