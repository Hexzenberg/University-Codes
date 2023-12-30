// WAP to find nth node from the end of a Linked List.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void c(sn**h,int n){
    int i=0;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        sn*q=malloc(sizeof(sn)),*l;
        scanf("%d",&q->a),q->n=NULL;
        (*h==NULL)?l=*h=q:(l->n=q,l=q);
    }
}
void f(sn*h){
    if(h==NULL)return;
    int n,t=1;sn*p=h;
    printf("Enter the position from the end:\n"),scanf("%d",&n);
    for(;p->n!=NULL;p=p->n,t++);n=t-n+1;
    if(n<=0||n>t){printf("Out of the range.\n");return;}
    for(p=h,t=1;t<n;t++,p=p->n);
    printf("The element is: %d\n",p->a);
}
int main(){ 
    sn*h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),f(h);
    return 0;
}
