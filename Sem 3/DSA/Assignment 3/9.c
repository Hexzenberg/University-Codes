// In a single/double linked list, user gives a certain range of index with shifting value. You
// need to right shift and rotate those range of values based on the given shifting value. Do the
// same for left shift. Given list: 2 9 6 3 5 8 11 3 6 7 13 5
// Given range: 4th index to 9thindex(consider the starting index is 0) and shifting value is 2
// Output: 2,9,6,3,6,7,5,8,11,3,13,5
// Given list: 2,9,6,3,5,8,11,3,6,7,13,5
// Given range: 2nd index to 8th index(consider the starting index is 0) and shifting value is 4
// Output: 2,9,8,11,3,6,6,3,5,7,13,5
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
    if(*h==NULL||(*h)->n==NULL||s>=e)return;
    sn*f=*h,*p,*l=*h,*q,*t;int k=0,j=0;
    while(k<s||j<e){
        if(j<e){q=l,l=l->n,j++;if(l==NULL){printf("Out of range.\n");return;}}
        else if(k<s){p=f,f=f->n,k++;if(f==NULL){printf("Out of range.\n");return;}}
    }(s==0)?q->n=l->n,l->n=f,*h=l:(p->n=l,q->n=l->n,l->n=f);
}
void g(sn**h,int s,int e){
    if(*h==NULL||(*h)->n==NULL||s>=e)return;
    sn*f=*h,*p,*l=*h,*q,*t;int k=0,j=0;
    while(k<s||j<e){
        if(k<s){p=f,f=f->n,k++;if(f==NULL){printf("Out of range.\n");return;}}
        else if(j<e){q=l,l=l->n,j++;if(l==NULL){printf("Out of range.\n");return;}}
    }(s==0)?*h=(*h)->n,f->n=l->n,q->n=f:(p->n=f->n,f->n=l->n,l->n=f);
}
int main(){
    int s,e,v,y,n;sn*h=NULL;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),
    printf("Enter the range and the shift value:\n"),scanf("%d%d%d",&s,&e,&v);
    printf("Enter 1 for Right shift and 2 for left shift:\n"),scanf("%d",&y);
    if(y==1)while(v--)r(&h,s,e);else while(v--)g(&h,s,e);disp(h);
}