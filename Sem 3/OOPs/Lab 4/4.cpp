// Write a program to find out area or volume of an shape/object by using one function name as
// FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
// argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
// the function, then it will display appropriate message.
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
void area(){cout<<"Nothing to calculate.\n";}
void area(int r){cout<<"Area of the circle is: "<<pi*r*r<<" Square Units.\n";}
void area(int l,int b){cout<<"Area of the rectangle is: "<<l*b<<" Square Units.\n";}
void area(int l,int b,int h){cout<<"Volume of the box is: "<<l*b*h<<" Cubic Units.\n";}
int main(){
    int a,b,c;
    cout<<"Enter any three numbers:\n",cin>>a>>b>>c,area(),area(a),area(a,b),area(a,b,c);
    return 0;
}