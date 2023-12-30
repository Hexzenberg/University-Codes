/*Q 18.01.22*/
#include<stdio.h>
struct book
{
    char Name[20];
    char Author[20];
    int price;
};
int main()
{
    struct book b[5];
    int i;
    printf("Enter the information about the books:");
    for(i=0;i<5;i++){
        scanf("%s%s%d",b[i].Name,b[i].Author,&b[i].price);
    }
    for(i=0;i<5;i++){
        printf("Name:%s Author:%s price:%d\n",b[i].Name,b[i].Author,b[i].price);
    }
}
