// Sept 15,2022
// Wap to do the sorting as follows:
// bring all the smaller elements in the beginning 
// bring all the larger elements in the beginning
// Delete the middle element of the linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void cr(sn**h,int n){
    printf("Enter the elements:\n");
    sn*l=*h;
    for(int i=0;i<n;i++){
        sn*cur=malloc(sizeof(sn));
        scanf("%d",&cur->a),cur->n=NULL;
        (*h==NULL)?*h=l=cur:(l=l->n=cur);
    }
}
void dis(sn*h){for(;h!=NULL;h=h->n)printf("%d ",h->a);printf("\n");}
void sort(sn*h){for(sn*p=h;p->n!=NULL;p=p->n)for(sn*q=p->n;q!=NULL;q=q->n)if(p->a>q->a){int t=p->a;p->a=q->a,q->a=t;}}
void so(sn*h){for(sn*p=h;p->n!=NULL;p=p->n)for(sn*q=p->n;q!=NULL;q=q->n)if(p->a<q->a){int t=p->a;p->a=q->a,q->a=t;}}
void del(sn*h){
    int s=0;
    for(sn*p=h;p!=NULL;p=p->n)s++;
    if(s%2!=0){
        sn*p=h,*q;s/=2;
        while(s--)q=p,p=p->n;
        q->n=p->n,free(p);
    }else{
        sn*p=h,*q;s/=2,s--;
        while(s--)q=p,p=p->n;
        sn*r=p->n;free(p),q->n=r->n,free(r);
    }
}
int main(){
    int n;sn*h=NULL;
    printf("Enter number of elements:\n"),scanf("%d",&n),cr(&h,n);
    so(h),dis(h),sort(h),dis(h),del(h),dis(h);
    return 0;
}