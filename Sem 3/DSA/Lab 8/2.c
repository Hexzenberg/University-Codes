//October 20,2022 
//Implement stack using Linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
typedef struct stack{sn*t;}s;
void push(s*h,int v){
    sn*c=malloc(sizeof(sn));
    if(c==NULL)return;
    c->a=v,c->n=NULL;  
    (h->t==NULL)?h->t=c:(c->n=h->t,h->t=c);
}
void pop(s*h,int*k){
    if(h->t==NULL)return;
    sn*p=h->t;*k=h->t->a,h->t=h->t->n,free(p);
}
void disp(s*h){int k;if(h->t==NULL)return;pop(h,&k),printf("%d ",k),disp(h),push(h,k);}
int main(){
    int n;printf("Enter the number of elements:\n"),scanf("%d",&n);s h;h.t=NULL;
    for(int i=0;i<n;i++)push(&h,i);disp(&h);
    return 0;
}