//October 20,2022 
//Implement stack using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct stack{int d[MAX],t;}s;
void push(s*t,int v){if(t->t!=MAX-1)t->d[++t->t]=v;}
void pop(s*t,int*k){if(t->t!=-1)*k=t->d[t->t--];}
void disp(s*t){int k;if(t->t==-1)return;pop(t,&k),printf("%d ",k),disp(t),push(t,k);}
int main(){
    s t;int n;t.t=-1;
    printf("Enter the number of elements:\n"),scanf("%d",&n);
    for(int i=0;i<n;i++)push(&t,i);disp(&t);
}