/*Q 12.01.22*/
#include<stdio.h>
int main()
{
    char i=0,src[100],dst[100];
    printf("Enter source string:");
    scanf("%s",src);
    while(dst[i]=src[i++]);
    printf("\nDestination string:%s",dst);
    return 0;
}