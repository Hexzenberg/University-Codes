#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void create(sn**h,int n){
    sn*cur,*l;
    printf("Enter the elements of the linked list:\n");
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(sn));
        scanf("%d",&cur->a);
        cur->n=NULL;
        if(*h==NULL)*h=l=cur;
        else l->n=cur,l=cur;
    }
}
void disp(sn*h){for(sn*p=h;p!=NULL;p=p->n)printf("%d ",p->a);printf("\n");}
void merge(sn**h1,sn*h2){
    sn*p=*h1;
    for(;p->n!=NULL;p=p->n);
    p->n=h2;
}
int main(){
    int n;
    sn*h1=NULL,*h2=NULL;
    printf("Enter the size of the first Linked List:\n");
    scanf("%d",&n);
    create(&h1,n);
    disp(h1);
    printf("Enter the size of the second Linked List:\n");
    scanf("%d",&n);
    create(&h2,n);
    disp(h2);
    merge(&h1,h2);
    disp(h1);
    return 0;
}