// August 23,2022
// Write a program to demonstrate the concept of call-by-value, 
// call-by-reference & call-byaddress by taking swapping of two numbers as an example.
#include<bits/stdc++.h>
using namespace std;
int s(int &a,int &b){int t=b;b=a;a=t;}
int s(int*a,int*b){int t=*b;*b=*a;*a=t;}
void s1(int a,int b){
    int t=b;
    b=a;
    a=t;
    cout<<"Swapping numbers by Call by value:\n"<<a<<" "<<b<<'\n';
}
int main(){
    int a,b;
    cout<<"Enter two numbers:\n",cin>>a>>b;
    s1(a,b),s(&a,&b);
    cout<<"Swapping numbers by Call by reference:\n"<<a<<" "<<b<<'\n';
    s(a,b);
    cout<<"Swapping numbers by Call by address:\n"<<a<<" "<<b;
    return 0;
}