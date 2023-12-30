//Implement stack using queue
//Justify that ll is better than array using suitable example.
#include<stdio.h>
#include<stdlib.h>
int cur=0;
typedef struct node{
    int a; 
    struct node* n;
}sn;
typedef struct queue{sn*f,*r;}q;
void push(q*h,int v){
    sn*cur=malloc(sizeof(sn)),*l;cur->a=v,cur->n=NULL;
    (h->r==NULL)?(h->r=h->f=cur):(h->r=h->r->n=cur);
}
void dq(q*h,int*v){
    if(h->r==NULL)return;
    sn*p=h->f;*v=h->f->a,h->f=h->f->n,free(p);
    if(h->f==NULL)h->r=NULL;
}
void pop(q*h,int*v){
    if(h[cur].r==NULL)return;
    while(h[cur].f->n!=NULL)dq(&h[cur],v),push(&h[(cur+1)%2],*v);
    dq(&h[cur],v),cur=(cur+1)%2;
}
void dis(q*h){
    if(h[cur].r==NULL){printf("\n");return;}
    int k;pop(h,&k),printf("%d ",k),dis(h),push(&h[cur],k);
}
int main(){
    q h[2];h[0].f=h[0].r=h[1].f=h[1].r=NULL;int k;
    printf("Enter the number of elements:\n"),scanf("%d",&k);   
    for(int i=0;i<k;i++)push(&h[cur],i);dis(h);
    return 0;
}