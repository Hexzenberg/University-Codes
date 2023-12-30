// July 26,2022
// Create a class complex which stores real and imaginary part of a complex number. Input 
// 10 complex numbers and display them.
#include<bits/stdc++.h>
using namespace std;
class Complex{
float a_760[10],b_760[10];
public:
    void set(){
       float a_760[10],b_760[10];
       for(int i_760=0;i_760<10;i_760++){
           cin>>a_760[i_760]>>b_760[i_760];
           this->a_760[i_760]=a_760[i_760];
           this->b_760[i_760]=b_760[i_760];
       }
    }
    void disp(){
        for(int i_760=0;i_760<10;i_760++)cout<<"The real part is: "<<a_760[i_760]<<" and the imaginary part is: "<<b_760[i_760]<<'\n';
    }
};
int main(){
    Complex x_760;
    cout<<"Enter 10 complex numbers:"<<'\n';
    x_760.set();
    x_760.disp();
    return 0;
}