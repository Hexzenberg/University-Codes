/*Q2 14.12.21*/
#include <stdio.h>
int main()
{
    int i,item,m[20],pos=-1;
    printf("Enter the item:");
    scanf("%d",&item);
    for(i=0;i<20;i++){
        printf("Enter the Data:");
        scanf("%d",&m[i]);
    }
    for(i=0;i<20;i++){
        if(item==m[i]){
            pos=i;
            break;
        }
    }
    if(pos==-1)
    printf("\nThe term is not present in the array");
    else if(pos==i)
    printf("\nThe term is present in the array");
    return 0;
}