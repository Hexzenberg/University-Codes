// Write a program to display the contains of an object, when local variable’s
// name is same as member’s name by using this pointer.
#include<iostream>
using namespace std;
class a{
    int d;
    public:
        a(){int d;cin>>d;this->d=d;}
        void disp(){cout<<d;}
};
int main(){
    a f;f.disp();
    return 0;
}