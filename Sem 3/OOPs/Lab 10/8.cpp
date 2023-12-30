// Show = operator overloading
#include<iostream>
using namespace std;
class Complex {
    private:int r,i;
    public:
        Complex(int r=0,int i=0){this->r=r;this->i=i;}
        Complex operator=(Complex&a){
            Complex s;
            s.r=r+a.r,s.i=i+a.i;
            return s;
        }void print(){cout<<r<<" + i"<<i<<'\n';}
};
int main(){
    Complex c1(9,2),c2(1,5),c3=c1=c2;c3.print();
}