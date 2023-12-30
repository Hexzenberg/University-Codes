// Write a program to define the function template for swapping the two items of various 
// data types such as integers, float and characters etc.
#include<iostream>
using namespace std;
template<class t>t s(t&a,t&b){t c=a;a=b,b=c;}
int main(){
    int a=2,b=3;float c=1.1,d=2.2;
    cout<<a<<" "<<b<<endl,s(a,b),cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl,s(c,d),cout<<c<<" "<<d<<endl;
    return 0;
}