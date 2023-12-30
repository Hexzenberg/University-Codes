// Implement the level order traversal of a binary tree.
#include<stdio.h>
#include<stdlib.h>
typedef struct tree{int a;struct tree*l,*r;}tr;
void cr(tr**rt,int v){
    tr*node=malloc(sizeof(tr)),*p=*rt,*q=*rt;node->a=v,node->l=node->r=NULL;
    if(*rt==NULL){*rt=node;return;}
    while(p!=NULL)v>p->a?q=p,p=p->r:(q=p,p=p->l);
    v>q->a?q->r=node:(q->l=node);
}
int h(tr*node){
    if(node==NULL)return 0;
    int lh=h(node->l),rh=h(node->r);
    return((lh>rh)?lh+1:(rh+1));
}
void pcl(tr*root,int e){
    if(root==NULL)return;
    if(e==1)printf("%d ",root->a);
    else if(e>1)pcl(root->l,e-1),pcl(root->r,e-1);
}
void lvl(tr*root){
    int n=h(root),i;
    for(i=1;i<=n;i++)pcl(root,i);
}
int main(){
    tr*h=NULL;
    for(int i=1;i<8;i++)cr(&h,i);
    lvl(h);
}