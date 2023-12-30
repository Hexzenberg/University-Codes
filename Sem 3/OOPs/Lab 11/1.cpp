// 1/11/22
// Write a program to overload unary (-) operator.
#include<iostream>
using namespace std;
class a{
    int a;
    public:
        void operator -(){cin>>a,cout<<--a;} 
};
int main(){
    a x;-x;
    return 0;
}