/*04.01.22 Q1*/
#include<stdio.h>
int main()
{
    int a[3],b[3],i;
    printf("The elements stored in the first array:");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        b[i]=a[i];
    }
    printf("The Elements copied in the second array:\n");
    for(i=0;i<3;i++){
        printf("%d",b[i]);
    }
    return 0;
} 