// Write a program that opens two files in sequence for writing the data. Then it opens two
// files in sequence for reading the data and display the data in computer screen. File1
// contains state names of india and File2 contains the capital of different states of India.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s[28];
    cout<<"Enter the states:\n";for(int i=0;i<28;i++)getline(cin,s[i]);
    ofstream out("file1.txt",ios::out);
    out<<s;
    out.close();
    cout<<"Enter the capitals:\n";for(int i=0;i<28;i++)getline(cin,s[i]);
    ofstream tuo("file2.txt",ios::out);
    tuo<<s;
    tuo.close();
    ifstream min("file1.txt",ios::in);
    while(min){
        for(int i=0;i<28;i++)getline(min,s[i]);
        for(int i=0;i<28;i++)cout<<s[i]<<'\n';
    }
    ifstream nim("file2.txt",ios::in);
    while(nim){
        for(int i=0;i<28;i++)getline(nim,s[i]);
        for(int i=0;i<28;i++)cout<<s[i]<<'\n';
    }
    return 0;
}