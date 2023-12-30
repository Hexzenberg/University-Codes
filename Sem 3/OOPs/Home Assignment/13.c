// Write a menu driven program (user defined functions ) for the following string 
// operations:-
// a) Compare two strings.
// b) Toggle case of each character of a string.
// c) Reverse order of words in a given string.
// d) Remove all repeated characters from a given string.
#include<stdio.h>
#include<stdlib.h>
void tc(char*s760){
    int x760=0;
    while(s760[x760]){
        if(s760[x760]>='a'&&s760[x760]<='z')s760[x760]-=32;
        else if(s760[x760]>='A'&&s760[x760]<='Z')s760[x760]+=32;
        x760++;
    }
    printf("String after toggling case: %s\n",s760);
}
void c(char*s760,char*a760){
    int c=0,d=0,i,r=0;
    while(s760[c])c++;
    while(a760[d])d++;
    if(c==d){
    	for(i=0;a760[i];i++)if(s760[i]==a760[i])r++;
 	    printf(r==i?"The strings are equal.\n":"The strings are not equal.\n");
    }else printf("strings are not equal.\n");
}
void r(char*s760,int l760){ 
    int t760=0;    
    for(int i=0;i<l760;i++)if(s760[i])t760++;
    printf("The string after reversal:\n");
    for(int i=t760-1;i>=0;i--)printf("%c",s760[i]);
    printf("\n");
}  
void rr(char*s760,int l760){
    int m760=0,c760=0;
    char*b=malloc(m760*sizeof(char));
    for(int i=0;i<l760;i++){
        for(int j=i+1;j<l760;j++){
            if(s760[i]==s760[j]){
                c760=1;
                break;
            }
        }if(c760==0)b[m760++]=s760[i];
        c760=0;
    }
    printf("The array after removing repetitive elements: %s\n",b);
}
void me(char*a760,char*s760,int l760){
    int t760;
    printf("Enter a number assigned for any operation:\n1)Compare 2 strings.\n2)Toggle case of each character of a string.\n3)Reverse order of words of the strings.\n4)Remove repeated characters of a string.\n");
    scanf("%d",&t760);
    if(t760==1)c(s760,a760);
    else if(t760==2){
        printf("Toggling case of each character of the first string.\n");
        tc(s760);
        printf("Toggling case of each character of the second string.\n");
        tc(a760);
    }else if(t760==3){
        printf("Reversing order of words of the first string.\n");
        r(s760,l760);
        printf("Reversing order of words of the second string.\n");
        r(a760,l760);
    }else if(t760==4){
        printf("Removing all repeated characters from the first string.\n");
        rr(s760,l760);
        printf("Removing all repeated characters from the second string.\n");
        rr(a760,l760);
    }else{
        printf("Invalid number.\n");
        int d760;
        printf("Do you want to continue the program?\nEnter 1 for YES and 0 for NO:\n");
        scanf("%d",&d760);
       (d760==1)?me(s760,a760,l760):printf("End of the program, to perform the operations run the program again.\nThank You!");
    }
}
int main(){
    int l760,d760;
    printf("Enter the size of the strings:\n");
    scanf("%d",&l760);
    char*s760=malloc(l760*sizeof(char)),*a760=malloc(l760*sizeof(char));
    printf("Enter the first string:\n");
    gets(s760);
    gets(s760);
    printf("Enter the second string:\n");
    gets(a760);
    me(a760,s760,l760);
    printf("Do you want to continue the program?\nEnter 1 for YES and 0 for NO:\n");
    scanf("%d",&d760);
    if(d760==1){
        me(a760,s760,l760);
        printf("End of the program, to perform the operations run the program again.\nThank You!");
    }else printf("End of the program, to perform the operations run the program again.\nThank You!");
    return 0;
}