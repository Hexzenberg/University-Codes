// Sept 27,2022
// Modify the program 1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
// functions for this class to calculate the volume of the cylinder. Show the result by accessing
// the area method of circle and rectangle through object of rectangle class and the area of circle
// and volume method of cylinder class through the objects of cylinder class.
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
class CYLINDER:public CIRCLE{
    float h;
    public:
        CYLINDER(float h,float r):CIRCLE(r){this->h=h;}
        void ar(){cout<<"Volume of the cylinder is: "<<3.14*r*r*h<<" cubic units.\n";}
};
int main(){
    RECTANGLE a(2,3);
    a.ac(),a.ar();
    CYLINDER c(2,3);
    c.ac(),c.ar();
    return 0;
}