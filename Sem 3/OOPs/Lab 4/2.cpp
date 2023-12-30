// Write a program to demonstrate the use of scope resolution operator(::) by declaring same
// varibale name globally and locally and display the value of gloabl and local variables.
#include<bits/stdc++.h>
using namespace std;
int n=3;
int main(){
    int n=2;
    cout<<"Global variable: "<<::n<<"\nLocal Variable: "<<n;
    return 0;
}