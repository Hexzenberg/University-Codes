#include<stdio.h>
int prime(int n,int m){
    int j,c=0,i,p=0;
    i=n-m;
    int a[i];
    for(a[i]=m;a[i]<=n;a[i]++){
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0)p=1;
        }if(p==0 && a[i]!=0 && a[i]!=1)c++;
        p=0;
    }
    return c;
}
void pr(int n,int m){
    int j,p=0,i;
    i=n-m;
    int a[i];
    for(a[i]=m;a[i]<=n;a[i]++){
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0)p=1;   
        }if(p==0 && a[i]!=0 && a[i]!=1)printf("%d\t",a[i]);
        p=0;
    }
}
int main(){
    int x,y;
    printf("Enter the limits(upper before lower):");
    scanf("%d%d",&x,&y);
    printf("Limits entered:%d to %d",x,y);
    printf("\nThe number of prime numbers:%d",prime(x,y));
    printf("\nThe prime numbers in the given range:\n");
    pr(x,y);
    return 0;
}