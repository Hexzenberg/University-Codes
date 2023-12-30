//Implement queue using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 100 
typedef struct queue{int d[MAX],f,r;}q;
void enqueue(q*h,int v){if(h->r!=MAX-1)(h->r==-1)?h->d[h->r=h->f=0]=v:(h->d[++h->r]=v); }
void dequeue(q*h,int*k){if(h->f!=-1)(h->r==h->f)?h->f=h->r=0:h->f++;}
void disp(q*h){for(int i=h->f;i<=h->r;i++)printf("%d ",h->d[i]);}
int main(){
    int n;printf("Enter the number of elements:\n"),scanf("%d",&n);q h;h.f=h.r=-1;
    for(int i=0;i<n;i++)enqueue(&h,i);disp(&h);
    return 0;
}