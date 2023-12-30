/*Q Frequency 21.01.22*/
#include<stdio.h>
#include<string.h>
int main()
{
    char b[100],ch,i=0,c=0;
    printf("Enter a string:");
    gets(b);
    printf("\nEnter a character to find it's frequency:");
    scanf("%c",&ch);
    while(c+=ch==b[i],b[i++]);
    printf("Frequency of the character is:%d",c);
    return 0;
}