// Write a program by modifying 5 b) by making display() as pure virtual function
#include<iostream>
using namespace std;
class ABC{public:virtual void display()=0;};
class BBC:public ABC{public:void display(){cout<<6<<'\n';}};
class KBC:public ABC{public:void display(){cout<<7<<'\n';}};
int main(){
    ABC*p;BBC x;p=&x,p->display();KBC y;p=&y,p->display();
    return 0;
}