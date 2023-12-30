// Write a program to overload unary (-) operator using friend function
#include<iostream>
using namespace std;
class a{
    public: 
        int b;
        friend void operator-(a&x){cin>>x.b,cout<<--x.b;}
};
int main(){
    a x;-x;
    return 0;
}