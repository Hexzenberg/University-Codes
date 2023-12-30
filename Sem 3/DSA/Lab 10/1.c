//November 3,2022
//Make a menu driven program for pre post and in order traversals by recursion and iterative approach find the h of the tree
//Level order traversal
#include<stdio.h>
#include<stdlib.h>
typedef struct tree{int data;struct tree*l,*r;}tr;
typedef struct node{tr*data;struct node*r;}sn;
typedef struct stack{sn*top;}st;
void push(st*a,tr*v){sn*cur=malloc(sizeof(sn));cur->data=v,cur->r=a->top,a->top=cur;}
void pop(st*a,tr**v){if(a->top!=NULL)*v=a->top->data,a->top=a->top->r;}
void cr(tr**rt,int v){
    tr*node=malloc(sizeof(tr)),*p=*rt,*q=*rt;node->data=v,node->l=node->r=NULL;
    if(*rt==NULL){*rt=node;return;}
    while(p!=NULL)v>p->data?q=p,p=p->r:(q=p,p=p->l);
    v>q->data?q->r=node:(q->l=node);
}
void inr(tr*rt){if(rt!=NULL)inr(rt->l),printf("%d ",rt->data),inr(rt->r);}
void postr(tr*rt){if(rt!=NULL)postr(rt->l),postr(rt->r),printf("%d ",rt->data);}
void prer(tr*rt){if(rt!=NULL)printf("%d ",rt->data),prer(rt->l),prer(rt->r);}
void prei(tr*rt){
    if(rt==NULL)return;
    st s;tr*k;s.top=NULL;push(&s,rt);
    while(s.top!=NULL){
        pop(&s,&k),printf("%d ",k->data);
        if(k->r!=NULL)push(&s,k->r); 
        if(k->l!=NULL)push(&s,k->l);
    }
}
void ini(tr*rt){
    if(rt==NULL)return;
    st s;tr*k,*p=rt;s.top=NULL;
    while(p!=NULL)push(&s,p),p=p->l;
    while(s.top!=NULL){
        pop(&s,&k),printf("%d ",k->data);p=k->r;
        while(p!=NULL)push(&s,p),p=p->l;
    }
}
void posti(tr*rt){   
    if(rt==NULL)return;
    st s;tr*k,*t,*p=rt;s.top=NULL;
    while(p!=NULL){
        if(p->r!=NULL)push(&s,p->r);
        push(&s,p),p=p->l;
    }
    while(s.top!=NULL){
        pop(&s,&k);
        if(k->r==NULL||s.top==NULL)printf("%d ",k->data);
        else{pop(&s,&t);(k->r!=t)?printf("%d ",p->data),push(&s,t):push(&s,k),p=t;}
    }
}
int h(tr*node){
    if(node==NULL)return 0;
    int lh=h(node->l),rh=h(node->r);
    return((lh>rh)?lh+1:(rh+1));
}
void pcl(tr*root,int e){
    if(root==NULL)return;
    if(e==1)printf("%d ",root->data);
    else if(e>1)pcl(root->l,e-1),pcl(root->r,e-1);
}
void lvl(tr*root){
    int n=h(root),i;
    for(i=1;i<=n;i++)pcl(root,i);
}
int main(){
    tr*rt=NULL;int n;
    for(int i=1;i<5;i++)cr(&rt,5-i);
    printf("Enter\n1 for preorder\n2 for inorder\n3 for postorder\n4 for level order traversal\n5 for h of the tree:\n"),scanf("%d",&n);
    if(n==1)printf("Iterative function:\n"),prei(rt),printf("\nRecursive function:\n"),prer(rt);
    else if(n==2)printf("Iterative function:\n"),ini(rt),printf("\nRecursive function:\n"),inr(rt);
    else if(n==3)printf("Iterative function:\n"),posti(rt),printf("\nRecursive function:\n"),postr(rt);
    else if(n==4)lvl(rt);
    else if(n==5)printf("Height of the tree: %d",h(rt));
    else printf("Invalid input!");
    return 0;
}
