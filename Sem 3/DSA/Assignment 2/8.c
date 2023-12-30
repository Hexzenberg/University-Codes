// Write a program to rotate the circular elements based on the number of shifts. 
// If it is two shift then all the elements in the circle will be shifted two step forward. 
// Write the program without taking any extra array.
#include<stdio.h>
#define max 100
struct al{
    int n,m,a[max][max];
}typedef al;
void rot(al*p){
    int r=0,x=(p->n)-1,d=0,c=(p->m)-1,t=p->a[r][d];
    while(r!=x||d!=c){
        int k=p->a[r+1][d],q=p->a[r][c];
        for(int i=c;i>d;i--)p->a[r][i]=p->a[r][i-1];
        p->a[r++][d]=k;
        int b=p->a[x][c];
        for(int i=x;i>r;i--)p->a[i][c]=p->a[i-1][c];
        p->a[r][c--]=q; 
        int l=p->a[x][d];
        for(int i=d;i<c;i++)p->a[x][i]=p->a[x][i+1];
        p->a[x--][c]=b;
        for(int i=r;i<x;i++)p->a[i][d]=p->a[i+1][d];
        p->a[x][d++]=l;
    }
}
int main(){
    int s;
    al p;
    printf("Enter the usable size of 2D array:\n");
    scanf("%d%d",&p.n,&p.m);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.n;i++)for(int j=0;j<p.m;j++)scanf("%d",&(p.a[i][j]));
    printf("Enter the number of shifts:\n");
    scanf("%d",&s);
    for(int i=0;i<s;i++)rot(&p);
    printf("The array after %d shifts:\n",s);
    for(int i=0;i<p.n;i++)for(int j=0;j<p.m;j++)printf(j==p.m-1?"\n":(p.a[i][j]<10?"%d  ":"%d "),p.a[i][j]);
    return 0;
}
