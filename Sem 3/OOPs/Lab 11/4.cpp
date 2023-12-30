// Write a program to overload unary (++) operator and unary (--) operator using friend function.
#include<iostream>
using namespace std;
class a{
    int b;
    public:
        friend void operator--(a&x){cin>>x.b,cout<<--x.b<<'\n';} 
        friend void operator++(a&x){cin>>x.b,cout<<++x.b<<'\n';} 
};
int main(){
    a x;--x,++x;
    return 0;
}