// Write a program that takes student data (roll number, name, gender, marks in three
// subjects (phy, chem. & math) from the keyboard and store it to a file student.txt.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s,g;float p,c,m;
    cout<<"Enter the name,gender and marks of the student:\n",getline(cin,s),cin>>g>>p>>c>>m;
    ofstream out("student.txt");
    out<<"Name of the student:"<<s<<"\nGender:"<<g<<"\nMarks in phy,chem and math:\n"<<p<<" "<<c<<" "<<m;
    out.close();
    return 0;
}