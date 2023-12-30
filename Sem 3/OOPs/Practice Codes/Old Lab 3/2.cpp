//August 2,2022
// Create two classes which stores distance in feet, inches and meter, centimeter format  respectively. 
// Write a function which compares distance in object of these classes and  displays the larger one.
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    float f,i;
    a(){
        cout<<"Enter the Distance in feet and inches:\n";
        cin>>f>>i;
    }
    friend void co(a);
};
class b{
    public:
    float m,c;
    b(){
        cout<<"Enter the Distance in meter and centimeter:\n";
        cin>>m>>c;
    }
    friend void co(b);
};
int co(a x,b y){
    cout<<((0.3048*x.f+0.0254*x.i>y.m+y.c)?"The distance entered in feet and inches is more than that in meters and centimeters which is: ":
    "The distance entered in meters and centimeters is more than that in feet and inches which is: ")<<((0.3048*x.f+0.254*x.i>y.m+0.01*y.c)?
    0.3048*x.f+0.254*x.i:y.m+0.01*y.c)<<" in meters."<<'\n';
}
int main(){
    a x;
    b y;
    co(x,y);
    return 0;
}