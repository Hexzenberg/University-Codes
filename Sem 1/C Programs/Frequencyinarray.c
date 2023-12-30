/*Q2 04.01.22*/
#include<stdio.h>
int main()
{
    int f[100],n,c,i,j;
    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            c++;
            f[j]=0;
            }
        }
        if(f[i]!=0){
        f[i]=c;
        }
    }
    printf("\nFrequency of all elements of array:\n");
    for(int i=0;i<n;i++){
        if(f[i]!= 0){
        printf("Frequency of %d is %d\n",a[i],f[i]);
        }
    }
    return 0;
}
