// Define a class called Triangle, with two fields as base and height to calculate the area of a
// triangle. The class contains two methods such as getData() to initialize the fields of a triangle
// and areaTrin() to calculate the area of a triangle. Write a program to find out area of 10
// triangles.
#include<bits/stdc++.h>
using namespace std;
class Triangle{
    float b[10],h[10];
    public:
    void getData(){cout<<"Enter the base and height of 10 traingles:\n";for(int i=0;i<10;i++)cin>>b[i]>>h[i];}
    void areaTrin(){cout<<"The area of the 10 triangles is:\n";for(int i=0;i<10;i++)cout<<((0.5)*b[i]*h[i])<<'\n';}
};
int main(){
    Triangle a;
    a.getData(),a.areaTrin();
    return 0;
}