// WAP to find the position of substring in a given string.
#include<stdio.h>
#include<stdlib.h>
void r(char*s760,char*c760,int n760,int m760){
    int a760,b760;
    for(int i=0;i<n760;i++)if(s760[i]==c760[0]){a760=i;break;}
    for(int i=0;i<n760;i++)if(s760[i]==c760[0])for(int j=i+1;j<n760;j++)if(s760[j]==c760[m760-1]){b760=j;break;}
    printf("The sub-string starts from %d index of the string and ends at %d index of the string.",a760+1,b760+1);
}
int main(){
    int n760,m760;
    printf("Enter the size of the string and the sub-string:\n");
    scanf("%d%d",&n760,&m760);
    char*s760=malloc(n760*sizeof(char)),*c760=malloc(m760*sizeof(char));
    printf("Enter the string:\n");
    gets(s760);
    gets(s760);
    printf("Enter the substring:\n");
    gets(c760);
    r(s760,c760,n760,m760);
    return 0;
}