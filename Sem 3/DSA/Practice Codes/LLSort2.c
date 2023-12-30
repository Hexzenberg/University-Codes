#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void create(sn**h,int n){
    sn *cur,*l;
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(sn));
        scanf("%d",&cur->a),cur->n=NULL;
        if(*h==NULL)*h=l=cur;
        else{if(i==0)for(l=*h;l->n!=NULL;l=l->n);l->n=cur,l=cur;}
    }
}
void disp(sn*h){for(;h!=NULL;h=h->n)printf("%d ",h->a);printf("\n");}
void swap(sn**h,sn*x,sn*y,sn*q){
    *h=y,q->n=x;
    sn*t=y->n;
    y->n=x->n,x->n=t;
}
sn*resort(sn*h){
    if(h->n==NULL)return h;
    sn*m=h,*b=NULL,*ptr;
    for(ptr=h;ptr->n!=NULL;ptr=ptr->n)if(ptr->n->a<m->a)m=ptr->n,b=ptr;
    if(m!=h)swap(&h,h,m,b);
    h->n=resort(h->n);
    return h;
}
void sort(sn**h){
    if((*h)==NULL)return;
    *h=resort(*h);
}
 
int main(){
    int n;sn*h=NULL;
    printf("Enter the number of elements:\n"),scanf("%d",&n);
    create(&h,n),disp(h),sort(&h),disp(h);
}