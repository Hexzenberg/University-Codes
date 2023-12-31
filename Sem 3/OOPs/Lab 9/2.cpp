// Oct 11,2022
// Create a base class called Shape with two data members of double type which could be used to
// compute the area of figures. Derive two specific classes called Triangle and Rectangle from the
// base class Shape. Add to the base class, a member function called GetData to initialize base
// class data members and another member function displayArea to compute and display the area
// of figures. Make displayArea a virtual function and redefine this function in the derived classes
// to suit their requirements. Using these three classes design a program which will accept
// dimensions of a triangle or rectangle interactively and display the area
#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
        double l,b;
    public:
        void getdata(){cout<<"Enter the dimensions of the shape:\n",cin>>l>>b;}
        virtual void displayArea(){}
};
class Triangle:public Shape{
    public:
        void displayArea(){cout<<"The area of the triangle is: "<<0.5*l*b<<"\n";}
};
class Rectangle:public Shape{
    public:
        void displayArea(){cout<<"The area of the rectangle is: "<<l*b<<"\n";}
};
int main(){
    Triangle t;Rectangle r;
    t.getdata(),t.displayArea(),r.getdata(),r.displayArea();
    return 0;
}