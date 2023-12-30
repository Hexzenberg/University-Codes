// Sept 27,2022
// Write a program to create a class CIRCLE with one field as radius, used
// to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
// of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
// such that the radius of circle class can be re-used as length in rectangle class. Take necessary
// data members and member functions for both the classes to solve this problem. All the data
// members are initialized through the constructors. Show the result by accessing the area
// method of both the classes through the objects of rectangle class.
#include<bits/stdc++.h>
using namespace std;
class CIRCLE{
    protected:
        float r;
    public:
        CIRCLE(float r){this->r=r;}
        void ac(){cout<<"Area of the circle is: "<<3.14*r*r<<" sq units.\n";}
};
class RECTANGLE:public CIRCLE{
    float b;
    public:
        RECTANGLE(float b,float r):CIRCLE(r){this->b=b;}
        void ar(){cout<<"Area of the rectangle is: "<<r*b<<" sq units.\n";}
};
int main(){
    RECTANGLE a(2,3);
    a.ac(),a.ar();
    return 0;
}