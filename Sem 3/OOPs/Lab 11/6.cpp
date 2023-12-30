// Re-write the program 5 using friend function
#include<iostream>
using namespace std;
class complex{
    float a[2],b[2];
    public:
        friend void operator+(complex&x){for(int i=0;i<2;i++)cin>>x.a[i]>>x.b[i];cout<<x.a[0]+x.a[1]<<"+"<<x.b[0]+x.b[1]<<"i";}
        friend void operator*(complex&x){for(int i=0;i<2;i++)cin>>x.a[i]>>x.b[i];cout<<x.a[0]*x.a[1]<<"+"<<x.b[0]*x.b[1]<<"i";}
};
int main(){
    complex x;+x;*x;
    return 0;
}