// Write a program to illustrate how pointers to a base class is used
// for both base and derived class.
#include<iostream>
using namespace std;
class a{public:virtual int disp(){cout<<5<<'\n';}};
class b:public a{public:int disp(){cout<<6<<'\n';}};
int main(){
    a u,*z=&u;z->disp();b x;z=&x;z->disp();
    return 0;
}
