// Sept 6,2022
// Write a program to find out the greatest between two numbers defined in two different classes
// by using friend function.
#include<bits/stdc++.h>
using namespace std;
class b;
class a{
    int n;
    friend int c(a,b);
    public:
        a(){cout<<"Enter the number:\n",cin>>n;}
};
class b{
    int n;
    friend int c(a,b);
    public:
        b(){cout<<"Enter the number:\n",cin>>n;}
};
int c(a v,b c){return((v.n>c.n)?v.n:c.n);}
int main(){
    a s;
    b x;
    cout<<"The greater number is: "<<c(s,x);
    return 0;
}