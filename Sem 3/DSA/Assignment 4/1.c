// Write a program to check whether a string is bracket ( i.e. [], {} and () ) balanced or not 
// usingstack. (For example, the string “((())())()” contains properly nested pairs of parentheses, 
// but the string “)()(” does not, and the string “())” does not contain properly matching parentheses.
#include<stdio.h>
#include<stdlib.h>
#define max 100
struct stack{
    char a;
    struct stack*n;
}typedef st;
void push(st**top,char v){ st *cur=malloc(sizeof(st)); cur->a=v,cur->n=*top,*top=cur; }
void pop(st**top,char*v){ if(*top==NULL)return; *v=(*top)->a; st *p=*top; *top=(*top)->n,free(p); }
void dis(st*top){if(top!=NULL){ char k; pop(&top,&k),printf("%c",k),dis(top),push(&top,k); }}
void parchk(char a[]){
    int i=0,t;st*top=NULL;char c;
    while(a[i]){ 
        if(a[i]==92||a[i]==42||a[i]==124){i++;continue;}
        if(a[i]=='('||a[i]=='{'||a[i]=='[') push(&top,a[i]);
        else if((top!=NULL)&&(a[i]-top->a==1||a[i]-top->a==2))pop(&top,&c),i;
        else if(a[i]==')'||a[i]=='}'||a[i]==']'){printf("Not balanced\n");return;}
        i++;
    }printf((top==NULL)?"Balanced\n":"Not Balanced\n");
}
int main(){
    char a[max];
    printf("Enter an expression:\n"),scanf("%s",a);
    parchk(a);
    return 0;
}