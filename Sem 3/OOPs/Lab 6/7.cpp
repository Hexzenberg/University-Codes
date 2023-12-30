// Sept 6,2022
// Write a program to perform addition of two complex numbers using constructor overloading.
// The first constructor which takes no argument is used to create objects which are not
// initialized, second which takes one argument is used to initialize real and imaginary parts to
// equal values and third which takes two argument is used to initialize real and imaginary to
// two different values.
#include<bits/stdc++.h>
using namespace std;
class c{
    float a,b;
    public:
        c(){}
        c(float d){cin>>d;a=b=d;}
        c(float d,float g){cin>>d>>g;a=d,b=g;}
        friend void disp(c,c);
};
void disp(c x,c y){cout<<"The sum is: "<<x.a+y.a<<" + "<<x.b+y.b<<"i";}
int main(){
    c x(2),y(3,4);
    disp(x,y);
    return 0;
}