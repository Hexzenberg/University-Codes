//WAP to construct a expression tree from the postfix expression.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char a;
	struct node*l,*r,*n;
}sn;
sn*rt=NULL;
sn*nn(char a){
	sn*cur=malloc(sizeof(sn));
	cur->a=a;cur->l=cur->r=cur->n=NULL;
	return cur;
}
void in(sn*rt){if(rt!=NULL)in(rt->l),printf("%c",rt->a),in(rt->r);}
void push(sn*x){(rt==NULL)?rt=x:((x)->n=rt,rt=x);}
sn*pop(){sn*p=rt;rt=rt->n;return p;}
int main(){
	char c[]={'a','b','c','*','+','d','/'};int l=sizeof(c)/sizeof(c[0]);sn*x,*y,*z;
	for(int i=0;i<l;i++){
		if(c[i]=='+'||c[i]=='-'||c[i]=='*'||c[i]=='/'||c[i]=='^')z=nn(c[i]),x=pop(),y=pop(),z->l=y,z->r=x,push(z);
		else z=nn(c[i]),push(z);
	}printf("Inorder Traversal of Expression Tree:\n"),in(z);
	return 0;
}
