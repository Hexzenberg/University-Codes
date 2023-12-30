// Write a program to count number of words and lines available in a file student.txt.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream a;char s,str[1000];int x=0,y=1,i=0,z=0;
    a.open("5.cpp",ios::in);
    while(a>>noskipws>>s){str[x++]=s;if(s=='\n')y++;}
    str[x]='\0';
    while(str[i]){
       if(str[i]=='\n'){if(str[i+1]!='\0'&& str[i+1]!=' ')z++;i++;}
       else if(str[i]!=' ')i++;
       else{if(str[i+1]!='\0'&&str[i+1]!=' ')z++;i++;}
    }
    cout<<"Number of words: "<<z<<"\nNumber of lines: "<<y;
    return 0;
}