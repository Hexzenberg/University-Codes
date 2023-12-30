// Sept 13,2022
// Extend the program 2 to include class sports, which stores the marks in sports activity. Derive the result 
// class from the class 'test' and 'sports'. Calculate the total marks and percentage of a student.
#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
        int r,a;string n;
    public:
        student(){cout<<"Enter name, roll number and age of the student:\n",getline(cin,n),cin>>r>>a;}
};
class test:virtual public student{
    protected:
        int m[5];
    public:
        test(){cout<<"Enter the marks in 5 subjects:\n";for(int i=0;i<5;i++)cin>>m[i];}
};
class sports:virtual public student{
    protected:
        int s;
    public:
        sports(){cout<<"Enter the marks in sports out of 100:\n",cin>>s;}
};
class result:public test,sports{
    public:
        result():student(),test(),sports(){}
        void disp(){
            int t=0;for(int i=0;i<5;i++)t+=m[i];
            cout<<"Name: "<<n<<"\nRoll number: "<<r<<"\nAge: "<<a<<"\nMarks in 5 subjects:\n";
            for(int i=0;i<5;i++)cout<<m[i]<<" ";cout<<"\nMarks in sports: "<<s<<"\nTotal marks: "<<t<<"\nPercentage: "<<(float)t/5;
        }
};
int main(){
    result r;
    r.disp();
    return 0;
}