// Sept 6,2022
// Create two classes DM and DB which store the value of distances. DM stores distances in
// meters and centimeters and DB in feet and inches. Write a program that can read values for
// the class objects and add one object of Dm with another object of DB. Use friend function to
// carry out the operation. The object that stores the results may be a DM object or DB object,
// depending on the units in which the results are required. The display should in the format of
// feet and inches or meters and centimeters depending on the object on display.
#include<bits/stdc++.h>
using namespace std;
class Dm;
class Db{
    public:
        float f,i;
        friend Db add(Dm,Db);
        friend Dm ad(Dm,Db);
        Db(){cout<<"Enter the distance in feet and inches:\n",cin>>f>>i;}
};
class Dm{
    public:
        float m,c;
        friend Db add(Dm,Db);
        friend Dm ad(Dm,Db);
        Dm(){cout<<"Enter the distance in meters and centimeters:\n",cin>>m>>c;}
};
Db add(Db a,Dm b){cout<<"The distance is :"<<a.f+(b.m*3.28)<<" feet and "<<a.i+(b.c/2.54)<<" inches\n";}
Dm ad(Db a,Dm b){cout<<"The distance is :"<<(a.f/3.28)+b.m<<" meters and "<<(a.i*2.54)+(b.c)<<" centimeters\n";}
int main(){
    Db x;Dm y;
    add(x,y),ad(x,y);
    return 0;
}