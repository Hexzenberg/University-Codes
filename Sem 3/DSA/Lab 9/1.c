//October 27,2022
//WAP to implement infix to postfix conversion and evaluation of postfix expression
//WAP to implement 2 stacks in single storage
//WAP to check one string is having balanced parenthesis or not if not then display the first inbalance parenthesis position
//LAB Questions:
//WAP to construct a bst where the input are given in terms of char string and do the following traversal using recursion:pre,post,in
//WAP to count the number of internal and external nodes. Display the leaf and non leaf nodes.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char a;
    struct node*l,*r;
}sn;
void i(sn**h,char c[]){
    int i=0;
    sn*cur=malloc(sizeof(sn)),*t,*p;cur->l=cur->r=NULL,cur->a=c[i++],*h=t=p=cur;
    while(c[i]){
        t=p=*h;sn*cur=malloc(sizeof(sn));cur->l=cur->r=NULL,cur->a=c[i++];
        while(p!=NULL)(cur->a>p->a)?t=p,p=p->r:(t=p,p=p->l);
        (cur->a>t->a)?t->r=cur:(t->l=cur);
    }
}
void pre(sn*h){if(h!=NULL)printf("%c ",h->a),pre(h->l),pre(h->r);}
void in(sn*h){if(h!=NULL)in(h->l),printf("%c ",h->a),in(h->r);}
void post(sn*h){if(h!=NULL)post(h->l),post(h->r),printf("%c ",h->a);}
int main(){
    sn*h;char c[]="Spain";
    i(&h,c),pre(h),printf("\n"),in(h),printf("\n"),post(h);
}