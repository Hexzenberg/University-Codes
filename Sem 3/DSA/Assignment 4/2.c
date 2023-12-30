// Write a function to convert Infix expression to Postfix expression.
#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    char a;
    struct stack*n;
}st;
void push(st**top,char v){ st *cur=malloc(sizeof(st)); cur->a=v,cur->n=*top,*top=cur; }
void pop(st**top,char *k){if(*top==NULL)return; st *p=*top; *k=p->a,(*top)=p->n, free(p); }
void dis(st*top){if(top!=NULL){ char k; pop(&top,&k),dis(top),printf("%c",k),push(&top,k);}}
int isoperand(char a){ return(a=='+'||a=='-'||a=='*'||a=='/'||a=='^'||a=='('||a==')'?0:1); }
int isLtoH(char a,char b){return(((b=='*'||b=='/'||b=='^')&&(a=='+'||a=='-'))?1:0);}
void intopo(char in[],char out[]){
    int i=0,j=0;char k;
    st*top=NULL;
    while(in[i]){
        if(isoperand(in[i]))out[j++]=in[i];
        else if(in[i]=='(')push(&top,in[i]);
        else if(in[i]==')'){
            while(1){
                pop(&top,&k);
                if(k=='(')break;
                out[j++]=k;
            }
        }else{
            if(top==NULL)push(&top,in[i]);
            else{
                pop(&top,&k);
                (k=='(' || isLtoH(k,in[i]))?push(&top,k),push(&top,in[i]):(out[j++]=k,i--);
            }
        }i++;
    }while(top!=NULL)pop(&top,&k),out[j++]=k;out[j]='\0';
}
int main(){
    int n;char a[100],b[100];
    printf("Enter the infix of an expression:\n"),scanf("%s",a),intopo(a,b);
    printf("Postfix expression:\n%s",b);
    return 0;
}