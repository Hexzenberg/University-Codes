//19 July,2022
//WAP to input name, roll number and marks in 5 subjects for a student, and display it.
#include<bits/stdc++.h>
using namespace std;
struct c{
    int r,m[5];
    char n[100];
};
int main(){
    c x;
    cout<<"Enter the name and the roll number of the student:\n";
    cin>>x.n>>x.r;
    cout<<"Enter the marks:";
    for(int i=0;i<5;i++)cin>>x.m[i];
    cout<<"The name of the student is: "<<x.n<<"\nThe roll number of the student is: "<<x.r<<"\nTheir marks in 5 subjects: ";
    for(int i=0;i<5;i++)cout<<x.m[i]<<'\t';
    return 0;
}