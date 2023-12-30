// Implement the queue with the following criteria. 
// ● Let there are two fixed size array used for implementation of queue. one array is used for
// inserting even element and another array is used for inserting odd element. 
// ● Insertion operation: If an even element comes and even element array is not full then add
// the element at the rear end of the even element queue. If an even element comes and even element array 
// is full then add the even element at the rear end of the odd element queue. Similarly for odd element. 
// ● Deletion operation: Delete the front element of the array having maximum number of
// elements 
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct queue{int e[MAX],o[MAX],r1,f1,r2,f2;}qu;
void en(qu*q,int v){
    if(q->r1==MAX-1&&q->r2==MAX-1)return;
    if(v%2==0)(q->r1<MAX-1)?(q->r1==-1)?q->e[q->r1=q->f1=0]=v:(q->e[++q->r1]=v):(q->r2==-1)?q->o[q->r2=q->f2=0]=v:(q->o[++q->r2]=v);
    else (q->r2<MAX-1)?(q->r2==-1)?q->o[q->r2=q->f2=0]=v:(q->o[++q->r2]=v):(q->r1==-1)?q->e[q->r1=q->f1=0]=v:(q->e[++q->r1]=v);
}
void dq(qu*q,int*k){
    if(q->r1-q->f1>q->r2-q->f2){*k=q->e[q->f1];for(int i=q->f1+1;i<=q->r1;i++)q->e[i-1]=q->e[i];q->r1--;}
    else{*k=q->o[q->f2];for(int i=q->f2+1;i<=q->r2;i++)q->o[i-1]=q->o[i];q->r2--;}
}
void disp(qu q){for(int i=q.f1;i<=q.r1;i++)printf("%d ",q.e[i]);for(int i=q.f2;i<=q.r2;i++)printf("%d ",q.o[i]);}
int main(){
    qu q;q.f1=q.f2=q.r1=q.r2=-1;int k;
    for(int i=0;i<9;i++)en(&q,i);disp(q);
    dq(&q,&k),printf("\n%d\n",k),disp(q);
    return 0;
}