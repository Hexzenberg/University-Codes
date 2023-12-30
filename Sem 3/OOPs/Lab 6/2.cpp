// Sept 6,2022
// Write a program to find out the area of one rectangle and one square by using a suitable friend
// function named as area() for it.
#include<bits/stdc++.h>
using namespace std;
class a{
    int l;
    friend void area(a);
    friend void area(a,a);
    public:
        a(){cout<<"Enter the value:\n",cin>>l;}
};
void area(a c,a b){cout<<"The area of the rectangle: "<<c.l*b.l<<" sq units.\n";}
void area(a a){cout<<"The area of the square: "<<a.l*a.l<<" sq units.\n";}
int main(){
    a r,w;
    area(r),area(w),area(r,w);
    return 0;
}