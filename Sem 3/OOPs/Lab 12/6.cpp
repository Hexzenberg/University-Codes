// Write a program to define a class template for reading two data items from
// the keyboard and find out their sum.
#include<iostream>
using namespace std;
template<class t>
class a{
    t x,y;
    public:
        a(){cout<<"Enter any two numbers:\n",cin>>x>>y;}
        void disp(){cout<<"The sum of the two numbers: "<<x+y;}
};
int main(){
    a<float>o;o.disp();
    return 0;
}