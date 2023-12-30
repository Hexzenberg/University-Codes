// Sept 6,2022
// Write a program to find out the area of an rectangle through friend function and member
// function separately of Rectangle class.
#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    int l,b;
    friend void ar(Rectangle);
    public:
        Rectangle(){cout<<"Enter the length and breadth of the rectangle:\n",cin>>l>>b;}
        void a(){cout<<"The area of the rectangle: "<<l*b<<" sq units.\n";}
};
void ar(Rectangle a){cout<<"The area of the rectangle: "<<a.l*a.b<<" sq units.\n";}
int main(){
    Rectangle r;
    r.a(),ar(r);
    return 0;
}