// Let a single array is divided into four equal parts. Implement double ended circular queue in
// each sub part.
#include<stdio.h>
#define max 100
typedef struct DEQ{int a[max],f[4],r[4];}DEQ;
void init(DEQ*qu){for(int i=0;i<4;i++)qu->f[i]=qu->r[i]=i*(max/4)-1;}
int dq(DEQ*qu,int*v,int t,int n){
    if(qu->f[n-1]==(n-1)*(max/4)-1)return 1;
    if(qu->f[n-1]==qu->r[n-1])*v=qu->a[qu->f[n-1]],qu->f[n-1]=qu->r[n-1]=(n-1)*(max/4)-1; 
    else if(t==0)*v=qu->a[qu->f[n-1]],qu->f[n-1]=((n-1)*(max/4))+(qu->f[n-1]+1)%(max/4);
    else if(t==1)*v=qu->a[qu->r[n-1]],qu->r[n-1]=((n-1)*(max/4))+(qu->r[n-1]+(max/4)-1)%(max/4);
    return 0;
}
int iq(DEQ*qu,int v,int t,int n){
    if(qu->f[n-1]==((n-1)*(max/4))+(qu->r[n-1]+1)%(max/4))return 1;
    if(qu->f[n-1]==(n-1)*(max/4)-1) qu->f[n-1]++,qu->a[++qu->r[n-1]]=v;
    else if(t==0)qu->a[qu->f[n-1]=((n-1)*(max/4))+(qu->f[n-1]+(max/4)-1)%(max/4)]=v;
    else if(t==1)qu->a[qu->r[n-1]=((n-1)*(max/4))+(qu->r[n-1]+1)%(max/4)]=v;
    return 0;
}
void disp(DEQ qu,int it,int dt,int n){
    if(qu.f[n-1]!=(n-1)*(max/4)-1){
        int k;dq(&qu,&k,dt,n),printf("%d ",k),disp(qu,it,dt,n),iq(&qu,k,it,n);
    }
}
int main(){
    DEQ qu;int n=1,it,dt,t;
    init(&qu),printf("Enter 0 for front insertion or 1 for rear insertion:\n"),scanf("%d",&it);
    printf("Enter 0 for front deletion or 1 for rear deletion:\n"),scanf("%d",&dt);
    for(int i=0;i<5;i++)iq(&qu,i,it,n),iq(&qu,i+5,it,n+1),iq(&qu,i+10,it,n+2),iq(&qu,i+15,it,n+3);
    disp(qu,it,dt,n),printf("\n"),disp(qu,it,dt,n+1),printf("\n"),disp(qu,it,dt,n+2),printf("\n"),disp(qu,it,dt,n+3);
    dq(&qu,&t,dt,n+3),printf("\n"),disp(qu,it,dt,n+3);
    return 0;
} 