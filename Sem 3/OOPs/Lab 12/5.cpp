// Write a C++ program illustrating overloading function
// template by taking sum of numbers (max. Three) entered through keyboard.
#include<iostream>
using namespace std;
template<class t>
void s(t a,t b,t c){cout<<a+b+c<<endl;}
int main(){
    int a,b,c;float d,e,f;
    cin>>a>>b>>c,s(a,b,c);
    cin>>d>>e>>f,s(d,e,f);
    return 0;
}