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
int isempty(STACK s){
    if(s.top==NULL) return(1);
    return(0);
}
void insert(STACK*s,int k){
    int m;
    if(isempty(*s)){ push(&s,k); return; }
    pop(s,&m);
    if(k>m) push(&s,m),push(&s,k);
    else insert(s,k),push(&s,m);
}
void sort(STACK *s){
    int k;
    if(isempty(*s)) return;
    pop(s,&k);
    sort(s);
    insert(s,k);
}
int main(){
    STACK *s;
    int n;
    s->top=NULL;
    for(int i=0;i<5;i++) scanf("%d",&n),push(&s,n);
    dis(s),printf("\n"),sort(s),dis(s);
    return 0;
}