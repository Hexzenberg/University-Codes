// Write a program to create a class player having data members as player number, name, score.
// Now enter details of player by overloading extraction operator (>>) and display all the details
// by overloading insertion operator (<<).
#include<iostream>
using namespace std;
class a{
    int b;
    public: 
    friend void operator>>(istream&in,a&t){cout<<"Enter a number:\n";in>>t.b;}
    friend void operator<<(ostream&in,a&t){in<<"b="<<t.b<<endl;}
};
int main(){
    a x;cin>>x,cout<<x;
    return 0;
}