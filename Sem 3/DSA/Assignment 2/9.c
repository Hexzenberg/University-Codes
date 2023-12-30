// Write a program to find the square matrix subset of an original two dimensional matrix whose summation,
//  i.e. the summation of all the elements of square matrix subset, is equal to the required number.
#include<stdio.h>
#define max 100
struct al{
    int m,n,a[max][max];
}typedef al;
void disp(al p){for(int i=0;i<p.n;i++)for(int j=0;j<=p.m;j++)printf(j==(p.m)?"\n":"%d ",p.a[i][j]);}
al f(al p,int req){
    
}
int main(){
    int s;
    al p,q;
    printf("Enter the usable size of 2D array:\n");
    scanf("%d%d",&p.n,&p.m);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.n;i++)for(int j=0;j<p.m;j++)scanf("%d",&p.a[i][j]);
    printf("Enter a number:\n");
    scanf("%d",&s);
    q=f(p,s);
    printf("The subset square matrix whose sum of elements is %d is:\n",s);
    disp(q);
    return 0;
}
// #include<stdio.h>
// #define max 100
// struct al{
//     int m,n,a[max][max];
// }typedef al;
// void disp(al p){for(int i=0;i<p.n;i++)for(int j=0;j<=p.m;j++)printf(j==(p.m)?"\n":"%d ",p.a[i][j]);}
// al f(al p,int req){
//     int k,l,t=1,s=0,x=2;
//     al q;
//     q.m=0,q.n=0;
//     int v=((p.n)<(p.m)?(p.n):(p.m)),u;
//     if(v<2) return(q);
//     for(int i=0;i<p.n-1;i++){
//         for(int j=0;j<p.m-1;j++){
//             u=((p.n-i)<(p.m-j)?(p.n-i):(p.m-j));
//             while(x<=u){
//                 for(int k=i;k<(i+x);k++)for(int l=j;l<(j+x);l++)s+=p.a[k][l];
//                 if(s==req){
//                     t=0;
//                     k=i;
//                     l=j;
//                     q.m=q.n=x;
//                     break;
//                 }x++,s=0;
//             }if(t==0)break;
//             x=2;
//         }if(t==0)break;
//     }
//     if(t==0)for(int i=0;i<q.n;i++)for(int j=0;j<q.m;j++)q.a[i][j]=p.a[i+k][j+l];
//     return q;
// }
// int main(){
//     int s;
//     al p,q;
//     printf("Enter the usable size of 2D array:\n");
//     scanf("%d%d",&p.n,&p.m);
//     printf("Enter the elements of the array:\n");
//     for(int i=0;i<p.n;i++)for(int j=0;j<p.m;j++)scanf("%d",&p.a[i][j]);
//     printf("Enter a number:\n");
//     scanf("%d",&s);
//     q=f(p,s);
//     printf("The subset square matrix whose sum of elements is %d is:\n",s);
//     disp(q);
//     return 0;
// }
