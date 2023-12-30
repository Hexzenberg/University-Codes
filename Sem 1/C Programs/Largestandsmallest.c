/*Q3 04.01.22*/
#include<stdio.h>
int main()
{
    int n,s,l,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=s=a[0];
    for(i=0;i<n;i++){
        if(a[i]>l)l=a[i];
        if(a[i]<s)s=a[i];
    }
    printf("The largest element if:%d",l);
    printf("\nThe smallest element is:%d",s);
}