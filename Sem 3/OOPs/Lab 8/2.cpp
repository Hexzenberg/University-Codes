// Sept 27,2022
// Modify the program 1 as follows:
// Derive a class named as BOX from RECTANGLE class. Take necessary data & member
// functions for this box class to calculate the volume of the box. All the data members are
// initialized through the constructors. Show the result by accessing the area method of circle
// and rectangle and the volume method of box class through the objects of box class.
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
    protected:
        float b;
    public:
        RECTANGLE(float b,float c):CIRCLE(c){this->b=b;}
        void ar(){cout<<"Area of the rectangle is: "<<r*b<<" sq units.\n";}
};
class BOX:public RECTANGLE{
    float h;
    public:
        BOX(float h,float b,float c):RECTANGLE(b,c){this->h=h;}
        void ab(){cout<<"Volume of the box is: "<<r*b*h<<" cubic units.\n";}
};
int main(){
    BOX a(2,3,4);
    a.ac(),a.ar(),a.ab();
    return 0;
}