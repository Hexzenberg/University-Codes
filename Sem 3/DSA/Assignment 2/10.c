// Write a program to find whether an array is subset of another array.
#include<stdio.h>
#define max 100
struct al{
    int n,m,a[max][max];
}typedef al;
void data(al*p){
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->n;i++)for(int j=0;j<p->m;j++)scanf("%d",&(p->a[i][j]));
}
void sc(al p,al q){
    int x,y=0;
    for(int i=0;i<p.n;i++){
        for(int j=0;j<p.m;j++){
            if(p.a[i][j]==q.a[0][0]&&y!=1){
                x=0;
                for(int k=0;k<q.n;k++){
                    for(int l=0;l<q.m;l++){
                        if((i+k)<p.n&&(j+l)<p.m){
                            if(q.a[k][l]!=p.a[i+k][j+l]){
                                x=1;
                                break;
                            }else if(l==(q.m-1)&&k==(q.n-1)){
                                y=1; 
                                printf("The given array is a subset of the previously entered array.\n"); 
                                break;
                            }
                        }
                    }if(x==1)break;
                }if(y==1)break;
            }
        }if(y==1)break;
    }
    if(y!=1)printf("The entered array is not a subset.\n");
}
int main(){
    al p,q;
    printf("Enter the size of 2D array:\n");
    scanf("%d%d",&p.n,&p.m);
    data(&p);
    printf("Enter the size of the 2D array which is to be checked:\n");
    scanf("%d%d",&q.n,&q.m);
    data(&q);
    sc(p,q);
    return 0;
}
