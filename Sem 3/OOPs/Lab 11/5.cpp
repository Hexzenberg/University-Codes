// Write a program to design a class representing complex numbers and having functionality of
// performing addition and multiplication of two complex numbers using operator overloading.
#include<iostream>
using namespace std;
class complex{
    float a[2],b[2];
    public:
        void operator+(){for(int i=0;i<2;i++)cin>>a[i]>>b[i];cout<<a[0]+a[1]<<"+"<<b[0]+b[1]<<"i";}
        void operator*(){for(int i=0;i<2;i++)cin>>a[i]>>b[i];cout<<a[0]*a[1]<<"+"<<b[0]*b[1]<<"i";}
};
int main(){
    complex x;
    +x;*x;
    return 0;
}