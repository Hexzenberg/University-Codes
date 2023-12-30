// Implement the queue using array and linked.
#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct node{ int data; struct node* nxt;}sn;
typedef struct qll{ sn *f,*r;}qll;
typedef struct qar{ int a[max],f,r;}qar;
void eqll(qll*h,int v){
    sn*cur=malloc(sizeof(sn));cur->data=v,cur->nxt=NULL;
    h->f==NULL?h->f=h->r=cur:(h->r=h->r->nxt=cur);
}
void dqll(qll*h,int*v){
    if(h->f==NULL)return;
    sn *p=h->f;*v=p->data;
    if(h->f==h->r) h->r=NULL;
    h->f=h->f->nxt,free(p);
}
void eqar(qar*h,int v){
    if(h->r==max-1)return; 
    if(h->f==-1)h->f++;
    h->a[++h->r]=v;
}
void dqar(qar *h,int *v){
    if(h->f==-1)return;
    *v=h->a[h->f];
    if(h->f==h->r)h->f--,h->r--;
    else{for(int i=h->f;i<h->r;i++)h->a[i]=h->a[i+1];h->r--;}
}
void dar(qar h){for(int i=h.f;i<=h.r;i++)printf("%d ",h.a[i]);}
void dll(qll h){for(;h.f!=NULL;h.f=h.f->nxt)printf("%d ",h.f->data);}
int main(){
    qll h;qar h1;h1.f=h1.r=-1,h.f=h.r=NULL;int k;
    for(int i=0;i<5;i++)eqar(&h1,i),eqll(&h,i+5);
    dar(h1),printf("\n"),dll(h),dqll(&h,&k),printf("\n%d\n",k),dll(h);
    return 0;
}
