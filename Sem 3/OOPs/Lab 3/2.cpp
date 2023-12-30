// August 2,2022
// Create a class complex which stores real and imaginary part of a complex number. Input 
// 2 complex numbers and display their sum.
#include<bits/stdc++.h>
using namespace std;
class Complex{
    float a_760[2],b_760[2];
    public:
        void set(){
            for(int i=0;i<2;i++)cin>>a_760[i]>>b_760[i];
        }
        void disp(){
            cout<<"The real part after addition is: "<<(a_760[0]+a_760[1])<<" and the imaginary part after addition is: "<<(b_760[0]+b_760[1]);
        }
};
int main(){
    Complex x_760;
    cout<<"Enter 2 complex numbers for their addition First the real part followed by the imaginary part of each number:\n";
    x_760.set();
    x_760.disp();
    return 0;
}