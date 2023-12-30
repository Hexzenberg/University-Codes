/*Q 12.01.22 Read sentence print number of vowels and consonants*/
#include<stdio.h>
#include<string.h>
int len(char *s){
    int i=0,co=0;
    while(*(s+i)!='\0'){
        co++;
        i++;
    }
    return co;
}
void main()
{
    char s[100];
    printf("Enter a string:");
    gets(s);
    int v=0,c=0;
    for (int i=0;i<len(s);i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')v++;
        else c++;
    }
    printf("\nNo. of vowels:%d\nNo. of consonants:%d",v,c);
}