// Sept 15,2022
// Take one decimal number convert that number to binary equivalent and store the value in 
// the linked list each node will contain the bits of the binary value.
// Find the ones compliment and Find the 2's complement.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n,*p;
}sn;
void cr(sn**h,int v){
    sn*l=*h,*cur=malloc(sizeof(sn));
    cur->a=v,cur->p=cur->n=NULL;
    (*h==NULL)?*h=cur:(cur->n=*h,(*h)->p=cur,*h=cur);
}
void db(sn**h,int n){
    int r=0,s=0;
    for(;n;n/=2){
        (n%2==0)?r=0:(r=1);
        cr(h,r);
    }
}
void oc(sn**h){for(sn*r=*h;r!=NULL;r=r->n)(r->a==0)?r->a=1:(r->a=0);}
void tc(sn**h){
    oc(h);sn*r=*h;
    for(;r->n!=NULL;r=r->n);
    for(;r->p!=NULL;r=r->p)if(r->a==1)break;
    for(r=r->p;r!=NULL;r=r->p)(r->a==1)?r->a=0:(r->a=1);
}
void dis(sn*h){for(;h!=NULL;h=h->n)printf("%d ",h->a);printf("\n");}
int main(){
    int n;sn*h=NULL;
    printf("Enter the number:\n"),scanf("%d",&n);
    db(&h,n),dis(h),oc(&h),dis(h),tc(&h),dis(h);
    return 0;
}