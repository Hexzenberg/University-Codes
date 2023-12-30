// //sort the stack using recursion.
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct stack{
//     int a[100],t;
// }s;
// int main(){
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
struct STACK{
    int data;
    struct STACK *top,*nxt;
}typedef STACK;
void push(STACK **s,int v){
    STACK *cur=malloc(sizeof(STACK)); 
    cur->data=v,cur->nxt=(*s)->top,(*s)->top=cur;
}
void pop(STACK *s,int *k){
    if(s->top->nxt==NULL){ *k=s->top->data,free(s->top),s->top=NULL; return; }
    STACK *t=s->top;
    s->top=s->top->nxt,*k=t->data,free(t);
}
void dis(STACK *s){
    if(s->top==NULL) return;
    int k; 
    pop(s,&k),printf("%d ",k),dis(s),push(&s,k);
}
int main(){
    STACK *s; s->top=NULL;
    for(int i=1;i<=5;i++) push(&s,i);
    dis(s);
    return 0;
}