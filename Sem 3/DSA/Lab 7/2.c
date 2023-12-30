//October 13,2022 
//WAP to do the following operations on sparse matrix using Arrays:
//1.Addition
//2.Multiplication
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct arraylist{
    int d[MAX],a,r,c;
}ar;
void cr(ar*h){
    printf("Enter the number of rows and columns:\n"),scanf("%d%d",&h->r,&h->c);
    printf("Enter the number of non zero elements:\n"),scanf("%d",&h->a);
    for(int i=0;i<3*h->a;i+=3)printf("Enter the row and column number and then the value:\n"),scanf("%d%d%d",&h->d[i],&h->d[i+1],&h->d[i+2]); 
}
void disp(ar*h){printf("(%d %d %d)",h->r,h->c,h->a);for(int i=0;i<3*h->a;i+=3)printf("(%d %d %d)",h->d[i],h->d[i+1],h->d[i+2]);printf("\n");}
void add(ar*h,ar*h1,ar*h2){
    if(h1->r!=h2->r||h1->c!=h2->c)printf("The matrices cannot be added!\n");
    h->r=h1->r,h->c=h1->c,h->a=0;int k=0;
    for(int i=0;i<3*h1->a;i+=3)for(int j=0;j<3*h2->a;j+=3)(h1->d[i]==h2->d[j]&&h1->d[i+1]==h2->d[j+1])?h->d[k++]=h1->d[i],h->d[k++]=h1->d[i+1],h->d[k++]=h1->d[i+2]+h2->d[j+2],h->a++:(h->d[k++]=h1->d[i],h->d[k++]=h1->d[i+1],h->d[k++]=h1->d[i+2],h->a++,h->d[k++]=h2->d[j],h->d[k++]=h2->d[j+1],h->d[k++]=h2->d[j+2],h->a++);
    printf("After addition:\n"),disp(h);
}
void mul(ar*h,ar*h1,ar*h2){
    if(h1->c!=h2->r)printf("The matrices cannot be multiplied!\n");
    else{
        h->r=h1->r,h->c=h2->c,h->a=0;int k=0;
        for(int i=0;i<3*h1->a;i+=3)for(int j=0;j<3*h2->a;j+=3)if(h1->d[i+1]==h2->d[j])h->d[k++]=h1->d[i],h->d[k++]=h2->d[j+1],h->d[k++]=h1->d[i+2]*h2->d[j+2],h->a++;
    }printf("After multiplication:\n"),disp(h);
}
int main(){
    ar h1,h2,h;
    cr(&h1),disp(&h1),cr(&h2),disp(&h2),mul(&h,&h1,&h2),add(&h,&h1,&h2);
    return 0;
}