// Sept 6,2022
// Write a program using copy constructor to copy data of an object to another object.
#include<bits/stdc++.h>
using namespace std;
class c{
    float a;
    public:
        c(){cout<<"Enter a value:\n",cin>>a;}
        c(c&d){a=d.a;}
        void disp(){cout<<"The value is: "<<a<<'\n';}
};
int main(){
    c x,y(x),z=y;
    x.disp(),y.disp(),z.disp();
    return 0;
}