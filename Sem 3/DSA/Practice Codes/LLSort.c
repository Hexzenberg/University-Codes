#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* nxt;
}typedef sn;
void create(sn**h,int n){
    sn *cur,*l;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(sn));
        scanf("%d",&cur->data),cur->nxt=NULL;
        if(*h==NULL) *h=l=cur;
        else{if(i==0) for(l=*h;l->nxt!=NULL;l=l->nxt); l->nxt=cur,l=cur;}
    }
}
void dis(sn*h){ for(;h!=NULL;h=h->nxt) printf("%d ",h->data); printf("\n"); }
void sort(sn *h){
    if(h==NULL) return;
    sn *l=h,*p; int m=h->data;
    for(l=h;l!=NULL;l=l->nxt) if(l->data>m) p=l,m=l->data;
    if(h->data<m) p->data=h->data,h->data=m;
    h=h->nxt,sort(h);
}
int main(){
    int n;
    sn *h=NULL;
    printf("Enter the number of elements\n"),scanf("%d",&n);
    create(&h,n),dis(h),sort(h),dis(h);
}