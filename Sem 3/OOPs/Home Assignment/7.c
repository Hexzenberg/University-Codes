// WAP to replace all vowels from a string with its immediate consonant.
#include<stdio.h>
#include<stdlib.h>
void r(char c760[],int n760){
    for(int i=0;i<n760;i++)(c760[i]=='a')?c760[i]='b':(c760[i]=='A')?c760[i]='B':(c760[i]=='e')?c760[i]='f':(c760[i]=='E')?c760[i]='F':(c760[i]=='i')?c760[i]='j':(c760[i]=='I')?c760[i]='J':(c760[i]=='o')?c760[i]='p':(c760[i]=='O')?c760[i]='P':(c760[i]=='u')?c760[i]='v':(c760[i]=='U')?c760[i]='V':0;
}
int main(){
    int n760;
    printf("Enter the length of the string:\n");
    scanf("%d",&n760);
    char*c760=malloc(n760*sizeof(char));
    printf("Enter the string:\n");
    gets(c760);
    gets(c760);
    r(c760,n760);
    printf("After changing the vowels:\n");
    puts(c760);
    return 0;
}