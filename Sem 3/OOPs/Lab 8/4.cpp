// Sept 27,2022
// Design a base class called Student with two fields:- (i) Name (ii) roll
// number. Derive two classes called Sports and Exam from the Student base class. Class Sports
// has a field called s_grade and class Exam has a field called e_grade which are integer fields.
// Derive a class called Results which inherit from Sports and Exam. This class has a character
// array or string field to represent the final result. Also it has a member function called display
// which can be used to display the final result. Illustrate the usage of these classes in main.
#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
        int r;string n;
    public:
        student(){}
        student(int r){cout<<"Enter name of the student:\n",getline(cin,n),this->r=r;}
};
class Exam:virtual public student{
    protected:
        int e_grade;
    public:
        Exam(){}
        Exam(int e_grade){this->e_grade=e_grade;}
};
class sports:virtual public student{
    protected:
        int s_grade;
    public:
        sports(){}
        sports(int s_grade){this->s_grade=s_grade;}
};
class result:public Exam,sports{
    public:
        result(){}
        result(int a,int b,int c):student(a),Exam(b),sports(c){}
        void display(){
            cout<<"Name: "<<n<<"\nRoll number: "<<r<<"\nMarks in class marks: "<<e_grade<<"\nMarks in sports: "<<s_grade<<"\nGrade: ";
            cout<<((e_grade>89)?"O":(e_grade>79)?"E":(e_grade>69)?"A":(e_grade>59)?"B":(e_grade>49)?"C":(e_grade>39)?"D":"F");
        }
};
int main(){
    result r(23,89,78);
    r.display();
    return 0;
}