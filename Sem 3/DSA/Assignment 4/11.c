// Implement the queue based on the figure as given below. This queue is a collection of
// multiple arrays. Once the first array gets over, then the number will be entered into the second
// array and so on. If a front element gets deleted then every element present in all these three
// arrays will move one step forward. During this deletion, the first element of second array will
// move to last element of the first array and so on.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct queue{int a[MAX],b[MAX],c[MAX],f,r;}qu;
void eq(qu*q,int v){
    int i=-1,j=-1;
    if(q->r>3*MAX-1)return;
    if(q->r>=-1)(q->r==-1)?q->a[q->r=q->f=0]=v:(q->a[++q->r]=v);
    else if(q->r>MAX-1)q->b[++i]=v,++q->r;
    else if(q->r>2*MAX-1)q->c[++j]=v,++q->r;
}
void dq(qu*q,int*k){
    if(q->f==-1)return;
    *k=q->a[q->f];
    if(q->r>-1&&q->r<MAX-1)for(int i=1;i<=q->r;i++)q->a[i-1]=q->a[i];
    else if(q->r>MAX-1&&q->r<2*MAX-1){for(int i=1;i<MAX;i++)q->a[i-1]=q->a[i];q->a[MAX-1]=q->b[0];for(int i=1;i<(q->r+1)%MAX;i++)q->b[i-1]=q->b[i];q->r--;}
    else if(q->r>2*MAX-1){for(int i=1;i<MAX;i++)q->a[i-1]=q->a[i];q->a[MAX-1]=q->b[0];for(int i=1;i<MAX;i++)q->b[i-1]=q->b[i];q->b[MAX-1]=q->c[0];for(int i=1;i<(q->r+1)%MAX;i++)q->c[i-1]=q->c[i];q->r--;}
}
void disp(qu q){
    if(q.r>-1&&q.r<MAX)for(int i=0;i<MAX;i++)printf("%d ",q.a[i]);
    else if(q.r>MAX-1&&q.r<2*MAX){for(int i=0;i<MAX;i++)printf("%d ",q.a[i]);for(int i=0;i<(q.r+1)%MAX;i++)printf("%d ",q.b[i]);}
    else if(q.r>2*MAX-1){for(int i=0;i<MAX;i++)printf("%d ",q.a[i]);for(int i=0;i<MAX;i++)printf("%d ",q.b[i]);for(int i=0;i<(q.r+1)%MAX;i++)printf("%d ",q.c[i]);}
}
int main(){
    qu q;int k;q.f=q.r=-1;
    for(int i=0;i<13;i++)eq(&q,i);disp(q);
    dq(&q,&k);printf("\n%d\n",k);disp(q);
    return 0;
}
