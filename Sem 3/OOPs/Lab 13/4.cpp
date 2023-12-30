// Write a program to count number of characters, tabs, newline characters available in
// a given text file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream a;char s;int x=0,y=1,z=0;
    a.open("student.txt",ios::in);
    while(a>>noskipws>>s){x++;if(s=='\n')y++;if(s==' ')z++;}
    cout<<"Number of characters: "<<x<<"\nNumber of lines: "<<y<<"\nNumber of spaces: "<<z;
    return 0;
}
