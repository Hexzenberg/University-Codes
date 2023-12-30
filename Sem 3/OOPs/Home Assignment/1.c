// Convert a Person’s Name in Abbreviated form.
#include<stdio.h>
#include<stdlib.h>
void i(char c760[],int n760){
    printf("The initials are:\n%c",c760[0]);
    for(int i=0;i<n760;i++)if(c760[i]==' ')printf("%c",c760[i+1]);
}
int main(){
    int n760;
    printf("Enter the size of the name:\n");
    scanf("%d",&n760);
    char*c760=malloc(n760*sizeof(char));
    printf("Enter the name:\n");
    gets(c760);
    gets(c760);
    i(c760,n760);
    return 0;
}