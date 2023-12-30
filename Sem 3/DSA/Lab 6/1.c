// Sept 15,2022
// WAP to keep odd elements in the beginning and even at the end in ll.
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
void dis(sn*h){while(h!=NULL)printf("%d ",h->a),h=h->n; printf("\n");}
void oe(sn**h){
    if(*h==NULL||(*h)->n==NULL)return;
    sn*os=*h,*oe,*es=*h,*ee,*p=*h;
    for(os=*h;os->n!=NULL;){if(os->a%2==0)os=os->n;else break;}
    for(es=*h;es->n!=NULL;){if(es->a%2!=0)es=es->n;else break;}
    if(os->a%2==0||es->a%2!=0||es->n==NULL)return;
    oe=os,ee=es;
    while(p!=NULL)(p!=os&&p->a%2!=0)?oe->n=p,oe=p,p=p->n:((p!=es&&p->a%2==0)?ee->n=p,ee=p,p=p->n:(p=p->n));
    *h=os,oe->n=es,ee->n=NULL;
}
int main(){
    int n;sn*h=NULL;
    printf("Enter number of elements:\n"),scanf("%d",&n),cr(&h,n);
    printf("After changing:\n"),oe(&h),dis(h);
    return 0;
}
