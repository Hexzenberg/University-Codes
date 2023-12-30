#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}typedef node;
void create(node**h,int n){
    node*cur,*l;
    printf("Enter the elements of the linked list:\n");
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(node));
        scanf("%d",&cur->data);
        cur->next=NULL;
        if(*h==NULL){
            *h=l=cur;
        }else{
            l->next=cur;
            l=cur;
        }
    }
}
void in(node**h,int v,int pos){
    node*cur=malloc(sizeof(struct node)),*p;
    if(cur==NULL)return;
    cur->data=v;
    cur->next=NULL;
    if(*h==NULL){
        *h=cur;
        (*h)->next=NULL;
    }else if(pos==0){
        cur->next=*h;
        *h=cur;
    }else{
        int i;
        for(i=0,p=*h;i<pos&&p->next!=NULL;i++,p=p->next);
        cur->next=p->next;
        p->next=cur;
    }
}
void disp(node*h){for(node*p=h;p!=NULL;p=p->next)printf("%d ",p->data);printf("\n");}
int main(){
    int n;
    node*head=NULL;
    printf("Enter the size of the Linked List:\n");
    scanf("%data",&n);
    create(&head,n);
    disp(head);
    in(&head,3,2);
    disp(head);
    return 0;
}