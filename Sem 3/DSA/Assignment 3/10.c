// Reverse a linked list from position m to n. Do it in-place and in one-pass. 
// For example: Given 1->2->3->4->5->NULL, m=2 and n = 4, return 1->4->3->2->5->NULL
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void c(sn**h,int n){
    int i=0;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        sn*q=malloc(sizeof(sn)),*l;
        scanf("%d",&q->a),q->n=NULL;
        (*h==NULL)?l=*h=q:(l->n=q,l=q);
    }
}
void disp(sn*h){while(h!=NULL)printf("%d ",h->a),h=h->n;printf("\n");}
void r(sn**h,int s,int e){
    if(s>=e){printf("Invalid!\n");return;}
    if(*h==NULL||(*h)->n==NULL)return;
    sn*f=*h,*k,*l=*h,*p,*q;
    for(int i=1;i<s;i++,k=f,f=f->n)if(f==NULL){printf("Invalid!\n"); return;}
    for(int i=1;i<e;i++,l=l->n)if(l==NULL){printf("Invalid!\n"); return;}
    (f==*h)?*h=l:(k->n=l);
    p=l->n;
    while(l!=f){
        for(q=f;q->n!=l;q=q->n);
        l->n=q,l=q;
    }f->n=p;
}
int main(){ 
    int s,e,n;sn*h=NULL;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),printf("Enter the range:\n"),
    scanf("%d%d",&s,&e),r(&h,s,e),printf("After reversal:\n"),disp(h);
}
