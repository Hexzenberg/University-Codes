//Implement queue using Linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
typedef struct queue{sn*f,*r;}q;
void enqueue(q*h,int v){
    sn*c=malloc(sizeof(sn));c->a=v,c->n=NULL;  
    (h->r==NULL)?h->f=h->r=c:(h->r=h->r->n=c);
}
void dequeue(q*h,int*k){if(h->f!=NULL){sn*p=h->f;*k=h->f->a,h->f=h->f->n,free(p);}}
void disp(q*h){for(sn*p=h->f;p!=NULL;p=p->n)printf("%d ",p->a);}
int main(){
    int n;printf("Enter the number of elements:\n"),scanf("%d",&n);q h;h.f=h.r=NULL;
    for(int i=0;i<n;i++)enqueue(&h,i);disp(&h);
    return 0;
}