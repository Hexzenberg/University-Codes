/*Sept 8,2022
WAP to take input from the user and apply the following operations:-
find the number of characters, number of words, find the number of vowels
display the odd position element only
find the duplicate characters and its occurences.
remove the odd position element.*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char a;
    struct node*n;
}sn;
void cr(sn**h,char*c,int*t,int*u,int*v){
    *t=*v=0,*u=1;sn*l=*h;
    for(int i=0;c[i];i++){
        sn*p=malloc(sizeof(sn));
        p->a=c[i],p->n=NULL;
        (*u)+=(p->a==' ')?1:0;
        (*v)+=(p->a=='A'||p->a=='E'||p->a=='I'||p->a=='O'||p->a=='U'||p->a=='a'||p->a=='e'||p->a=='i'||p->a=='o'||p->a=='u'?1:0);
        (*h==NULL)?*h=l=p,(*t)++:(l->n=p,l=p,(*t)++);
    }
}
void d(sn*h){
    sn*p=h,*q;int s=0,k=1;
    for(;p!=NULL;p=p->n){
        char c;
        for(q=p->n;q!=NULL;q=q->n)if(p->a==q->a){s=1,c=q->a;break;}
        if(s==1){
            for(sn*r=q->n;r!=NULL;r=r->n)if(q->a==r->a)k++;
            printf("character %c is present %d times\n",p->a,k+1);
        }k=1,s=0;
    }
}
void od(sn**h){
    printf("The characters at odd positions:\n");
    for(sn*r=*h;r!=NULL;r=(r->n)->n)printf("%c ",r->a);printf("\n");
    sn*p=(*h)->n,*q;free(*h),(*h)=q=p;
    for(int i=2;p!=NULL;q=p,p=p->n,i++)if(i%2!=0)q->n=p->n,free(p),p=q;
    printf("After deleting odd position characters:\n ");
    for(sn*p=*h;p!=NULL;p=p->n)printf("%c ",p->a);
}
int main(){
    sn*h=NULL;char c[100];int t,u,v,k;
    printf("Enter a string:\n"),gets(c),cr(&h,c,&t,&u,&v);
    printf("Number of characters: %d\nNumber of vowels: %d\nNumber of words: %d\n",t,v,u),d(h),od(&h);
    return 0;
}