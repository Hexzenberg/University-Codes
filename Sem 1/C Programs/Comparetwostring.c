/*Q 12.01.22*/
#include <stdio.h>
#include <ctype.h> 
int length(char *s)
{
    int k=-1;
    while(s[++k]);
    return k;
}
int main()
{
    printf("Enter string 1: ");
    char str[100];
    scanf("%s",str);
    printf("Enter string 2: ");
    char st[100];
    scanf("%s",st);
    int l1=length(str);
    int l2=length(st);
    if(l1!=l2)
    {
        if(l1>l2)
        printf("The string differs from pos number: %d",l2);
        else
        printf("The string differs from pos number: %d",l1);
    }
    else
    {
        int i,c=-1;
        for( i=0;i<l1;i++)
        {
            if(str[i]==st[i] || tolower(str[i])==st[i] || toupper(str[i])==st[i] )
            continue;
            else
            {
                c=i;
                break;
            }
        }
        if(c==-1)
        printf("The strings are equal (%d)",c);
        else
        printf("The strings differ at pos number: %d",c);
    }
    return 0;
}