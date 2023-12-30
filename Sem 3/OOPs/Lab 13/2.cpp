// Write a program to open the file student.txt and display the students information on the
// computer screen along with the total marks scored by the student.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char s,b[1000];int a=0,i=0,j=0;
    ifstream min("student.txt");
    while(min>>noskipws>>s)b[j++]=s;b[j]='\0';
    for(int i=0;b[i]!='\0';i++)cout<<((b[i]=='\n')?'\n':b[i]);
    while(b[i]){
        if(b[i]>47&&b[i]<58){a+=((10*(b[i]-48))+(b[i+1]-48));i++;}
        i++;
    }
    cout<<"\nThe sum of the marks:\n"<<a;
    return 0;
}