// Write a program to implement a stack that will return minimum element in constant time.
#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int a;
    struct stack*n,*m;
}st;
void push(st**top,int v){
    st *cur=malloc(sizeof(st)); cur->a=v,cur->n=*top,cur->m=cur;
    if(*top==NULL)*top=cur;
    else{cur->m=(*top)->m;((*top)->m->a>cur->a)?*top=(cur)->m=cur:(*top=cur);}
}
void pop(st**top,int*k){if(*top!=NULL){st*p=*top;*k=p->a,*top=(*top)->n,free(p);}}
void dis(st*top){if(top!=NULL){int k;pop(&top,&k),printf("%d ",k),dis(top),push(&top,k);}}
int main(){
    st*top=NULL;
    push(&top,1),push(&top,2),push(&top,0),push(&top,-5),push(&top,10);
    dis(top);printf("\n%d",top->m->a);
    return 0;
}