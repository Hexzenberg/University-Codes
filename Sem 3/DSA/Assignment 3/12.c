// Join two double circular linked list in the following manner. List 1: 12,13,14,15,16
// List 2: 40,50,60,71,72
// Resultant list: 12,40,13,50,14,60,15,71,16,72
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n,*p;
}sn;
void create(sn**h,int n){
	int i;sn*cur;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		cur=malloc(sizeof(sn));
		scanf("%d",&cur->a),cur->n=cur->p=NULL;
		(*h==NULL)?*h=cur->n=cur->p=cur:(cur->p=(*h)->p,cur->n=*h,(*h)->p->n=cur,(*h)->p=cur);
	}
}
void disp(sn*h){sn*p=h;while(p->n!=h)printf("%d ",p->a),p=p->n;printf("%d\n",p->a);}
void j(sn*h1,sn*h2){
    if(h1==NULL){h1=h2;return;}
    if(h2==NULL)return;
    sn*p=h1,*q=h2,*s;
    while(p->n!=h1&&q->n!=h2)s=q->n,q->n=p->n,q->p=p,p->n->p=q,p->n=q,p=p->n->n,q=s;
    if(p->n==h1){p->n=q,q->p=p;for(;q->n!=h2;q=q->n);q->n=h1;}
    else q->p=p,p->n->p=q,q->n=p->n,p->n=q;
}
int main(){ 
    sn*h1=NULL,*h2=NULL;
    int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),
    create(&h1,n),create(&h2,n),j(h1,h2),disp(h1);
}