/*Q7 14.12.21*/
#include<stdio.h>
int main()
{
    int a[5],o=0,e=0,po=0,ne=0,p=0,i,j,pn=0;
    for(i=0;i<5;i++){
        printf("Enter the term %d of the array:",i+1);
        scanf("%d",&a[i]);
        if(a[i]<=0)ne++;
        if(a[i]>=0)po++;
        if(a[i]%2!=0)o++;
        if(a[i]%2==0)e++;
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0)p=1;
        }if(p==0 && a[i]>1)pn++;
        p=0;
    }
    printf("The number of:\nPOSITIVE TERMS:%d\nNEGATIVE TERMS:%d\nODD TERMS:%d\nEVEN TERMS:%d\nPRIME TERMS:%d\n",po,ne,o,e,pn);
    return 0;
}
