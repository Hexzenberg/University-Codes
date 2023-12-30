// Write a program to find the intersection of two sets(consider each set is an array).
#include<stdio.h>
#define max 100
struct al{
    int n,m,a[max][max];
}typedef al;
struct arr{
    int size,a[2*max];
}typedef arr;
void set(al *p){
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->n;i++) for(int j=0;j<p->m;j++)scanf("%d",&(p->a[i][j]));
}
arr ch(al p){
    arr q;
    q.size=0;
    for(int i=0;i<p.n;i++)for(int j=0;j<p.m;j++)q.a[q.size++]=p.a[i][j];
    return(q);
}
void fi(al p,al q){
    int in=0;
    arr x=ch(p),y=ch(q);
    for(int i=0;i<x.size;i++){
        for(int j=0;j<y.size;j++){
            if(x.a[i]==y.a[j]){
                in++;
                break;
            }
        }
    }
    printf("The two arrays intersect %d times.\n",in);
}
int main(){
    al p,q;
    printf("Enter the size of 2D array:\n");
    scanf("%d%d",&p.n,&p.m);
    set(&p);
    printf("Enter the size of the 2D array which is to be checked:\n");
    scanf("%d%d",&q.n,&q.m);
    set(&q);
    fi(p,q);
    return 0;
}
