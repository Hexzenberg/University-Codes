// Write a program to copy the content of two files and merge them into a third file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1,f2,f3;string a;
    f1.open("filetoread.txt",ios::in),f2.open("student.txt",ios::in),f3.open("file3.txt",ios::out);
    while(getline(f1,a))f3<<a<<endl;while(getline(f2,a))f3<<a<<endl;
    f1.close(),f2.close(),f3.close();
    return 0;
}

