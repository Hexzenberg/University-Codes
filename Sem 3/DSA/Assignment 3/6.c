// Write a function to delete the whole Linked List.
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
void disp(sn*h){if(h==NULL)printf("Empty!");for(;h!=NULL;h=h->n)printf("%d ",h->a);printf("\n");}
void d(sn**h){
    if(*h==NULL)return;
    sn*p=(*h)->n,*q;
    while(p!=NULL)(*h)->n=NULL,free(p),p=(*h)->n;
    free(*h),*h=NULL;
}
int main(){
    sn*h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),printf("Before deletion:\n"),disp(h)
    ,d(&h),printf("After deletion:\n"),disp(h);
    return 0;
}
