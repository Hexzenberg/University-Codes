// Write a menu driven program for inserting, deleting, and display operation on the following:
// ◦ single linked list 
// ◦ doubly linked list 
// ◦ single circular linked list 
// ◦ double circular linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n,*p;
}sn;
void c(sn**h,int n){
    int i=0;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        sn*p=malloc(sizeof(sn)),*l;
        scanf("%d",&p->a),p->n=NULL;
        (*h==NULL)?l=*h=p:(l->n=p,l=p);
    }
}
void i(sn**h,int v,int pos){
	int j;sn*cur=malloc(sizeof(sn)),*p;
	if(cur==NULL)return;
	printf("Enter the position(from 0) and the value:\n"),scanf("%d%d",&pos,&v);
	cur->a=v,cur->n=NULL;
	if(*h==NULL)*h=cur;
	else if(pos==0)cur->n=*h,*h=cur;
	else{
		for(j=1,p=*h;j<pos&&p->n!=NULL;p=p->n,j++);
		cur->n=p->n,p->n=cur;
	}
}
void de(sn**h,int pos){
	if(*h==NULL)return;
	printf("Enter the position(from 0):\n"),scanf("%d",&pos);
	int i;sn*prv,*p;
	for(i=1,p=*h;i<pos && p!=NULL;i++)prv=p,p=p->n;
	if(p==NULL)return;
	else(p==*h)?*h=p->n,free(p):(prv->n=p->n,free(p));
}
void d(sn*h){printf("The linked list after the operation:\n");for(sn*p=h;p!=NULL;p=p->n)printf("%d ",p->a);printf("\nEnd of the program!");}
void cr(sn**h,int n){
    int i=0;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        sn*q=malloc(sizeof(sn)),*l;
        scanf("%d",&q->a),q->n=q->p=NULL;
        (*h==NULL)?l=*h=q:(q->p=l,l->n=q,l=q);
    }
}
void in(sn**h,int v,int pos){
	int j;sn*cur=malloc(sizeof(sn)),*q;
	if(cur==NULL)return;
	printf("Enter the position(from 0) and the value:\n"),scanf("%d%d",&pos,&v);
	cur->a=v,cur->n=cur->p=NULL;
	if(*h==NULL)*h=cur;
	else if(pos==0)(*h)->p=cur,cur->n=*h,*h=cur;
	else{
		for(j=1,q=*h;j<pos&&q->n!=NULL;q=q->n,j++);
        (q->n==NULL)?cur->p=q,q->n=cur:(cur->p=q,cur->n=q->n,q->n->p=cur,q->n=cur);
	}
}
void del(sn**h,int pos){
	if(*h==NULL)return;
	printf("Enter the position(from 0):\n"),scanf("%d",&pos);
	int i;sn*q;
	for(i=1,q=*h;i<pos&&q!=NULL;i++)q=q->n;
	if(q==NULL)return;
	else(q==*h&&q->n==NULL)?free(q),*h=NULL:((q==*h)?(*h)=q->n,free(q),(*h)->p:(q->n!=NULL)?q->p->n=q->n,q->n->p=q->p,free(q):(q->p->n=NULL,free(q)));
}
void crea(sn**h,int n){
	int i;sn *p,*l;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		p=malloc(sizeof(sn));
		scanf("%d",&p->a),p->n=NULL;
		(*h==NULL)?*h=l=p->n=p:(p->n=l->n,l->n=p,l=p);
	}
}
void ins(sn**h,int v,int pos){
	int i,c=0;sn*cur=malloc(sizeof(sn)),*p,*l;
	if(cur==NULL)return;
	printf("Enter the position(from 0) and the value:\n"),scanf("%d%d",&pos,&v);
	cur->a=v,cur->n=cur;
	for(l=*h;l->n!=*h;l=l->n,c++);pos%=(c+1);
	if(*h==NULL)*h=cur;
	else if(pos==0)cur->n=*h,l->n=cur,*h=cur;
	else{
		for(i=1,p=*h;i<pos;p=p->n,i++);
		cur->n=p->n,p->n=cur;
	}
}
void delt(sn**h,int pos){
	if(*h==NULL)return;
	printf("Enter the position(from 0):\n"),scanf("%d",&pos);
	int i;sn*prv=NULL,*p;
	for(i=1,p=*h;i<pos;i++)prv=p,p=p->n;
	if(p==*h&&p==p->n)*h=NULL,free(p);
	else{
		if(prv==NULL)for(prv=*h;prv->n!=*h;prv=prv->n);
		if(p==*h)*h=p->n;
        prv->n=p->n,free(p);
	}
}
void create(sn**h,int n){
	int i;sn*cur;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		cur=malloc(sizeof(sn));
		scanf("%d",&cur->a),cur->n=cur->p=NULL;
		(*h==NULL)?*h=cur->n=cur->p=cur:(cur->p=(*h)->p,cur->n=*h,(*h)->p->n=cur,(*h)->p=cur);
	}
}
void insert(sn**h,int v,int pos){
	int i,c=0;sn*cur=malloc(sizeof(sn)),*q;
	if(cur==NULL)return;
	printf("Enter the position(from 0) and the value:\n"),scanf("%d%d",&pos,&v);
	cur->a=v,cur->n=cur->p=cur;
	for(q=*h;q->n!=*h;q=q->n,c++);pos%=(c+1);
	if(*h==NULL)*h=cur;
	else if(pos==0)cur->n=*h,cur->p=(*h)->p,(*h)->p=cur,cur->p->n=cur,*h=cur;
	else{
		for(i=1,q=*h;i<pos;q=q->n,i++);
		cur->p=q,cur->n=q->n,q->n=cur,q->p=cur;
    }
}
void delete(sn**h,int pos){
	if(*h==NULL)return;
	printf("Enter the position(from 0):\n"),scanf("%d",&pos);
	int i;sn*q=*h;
	for(i=1;i<pos;i++)q=q->n;
	(q==*h&&q==q->n)?*h=NULL,free(q):((pos==0)?(*h)->p->n=(*h)->n,(*h)->n->p=(*h)->p,(*h)=q->n,free(q):(q->p->n=q->n,q->n->p=q->p,free(q)));
}
void disp(sn*h){
	sn*cur;
	printf("The linked list after the operation:\n");
	for(cur=h;cur->n!=h;cur=cur->n)printf("%d ",cur->a);printf("%d ",cur->a),printf("\nEnd of the program!");
}
int main(){
    sn*h=NULL;
	int l,o,m;
	printf("Enter 1 for Single Linked List, 2 for Doubly Linked List, 3 for Single Circular Linked Linked or 4 for Doubly circular linked list:\n"),scanf("%d",&l),printf("Enter the number of nodes:\n"),scanf("%d",&o);
	(l==1)?(c(&h,o),printf("Enter 1 for insertion or 2 for deletion or 3 to display:\n"),scanf("%d",&m),((m==1)?i(&h,1,1),d(h):m==2?de(&h,1),d(h):d(h))):((l==2)?cr(&h,o),printf("Enter 1 for insertion or 2 for deletion or 3 to display:\n"),scanf("%d",&m),((m==1)?in(&h,1,1),d(h):m==2?del(&h,1),d(h):d(h)):(l==3)?crea(&h,o),printf("Enter 1 for insertion or 2 for deletion or 3 to display:\n"),scanf("%d",&m),((m==1)?ins(&h,1,1),disp(h):m==2?delt(&h,1),disp(h):disp(h)):(l==4)?(create(&h,o),printf("Enter 1 for insertion or 2 for deletion or 3 to display:\n"),scanf("%d",&m),((m==1)?insert(&h,1,1),disp(h):m==2?delete(&h,1),disp(h):disp(h))):(printf("Invalid Input!")));
    return 0;
}
