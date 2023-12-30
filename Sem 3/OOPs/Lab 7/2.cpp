// Sept 13,2022
// Create a class student which stores name, roll number and age of a student. Derive a class test from 
// student class, which stores marks in 5 subjects. Input and display the details of the student.
#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
        int r,a;string n;
    public:
        student(){cout<<"Enter name, roll number and age of the student:\n",getline(cin,n),cin>>r>>a;}
};
class test:public student{
    int m[5];
    public:
        test():student(){
            cout<<"Enter the marks in 5 subjects:\n";
            for(int i=0;i<5;i++)cin>>m[i];
        }
        void disp(){
            cout<<"Name: "<<n<<"\nRoll number: "<<r<<"\nAge: "<<a<<"\nMarks in 5 subjects:\n";
            for(int i=0;i<5;i++)cout<<m[i]<<" ";
        }
};
int main(){
    test t;
    t.disp();
    return 0;
}