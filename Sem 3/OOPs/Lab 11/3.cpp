// Write a program to overload unary (++) operator and unary (--) operator
#include<iostream>
using namespace std;
class a{
    int a;
    public:
        void operator --(){cin>>a,cout<<--a<<'\n';} 
        void operator ++(){cin>>a,cout<<++a<<'\n';} 
};
int main(){
    a x;--x,++x;
    return 0;
}