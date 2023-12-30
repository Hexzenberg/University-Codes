/*Q10 14.12.21*/
#include<stdio.h>
int main ()
{   int n,i,w;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d of the array:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array in reverse order is:");
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}