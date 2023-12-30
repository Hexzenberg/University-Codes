// Write a program to find out the area of a circle and volume of a sphere by using function
// overloading concept. (Use one function name as AREA-VOL)
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
#define ll long long
void areavol(int r){cout<<"Area of the circle is: "<<pi*r*r<<'\n';}
void areavol(ll r){cout<<"Volume of the sphere is: "<<(4/3)*pi*r*r*r<<'\n';}
int main(){
    ll a;
    int r;
    cout<<"Enter the radius of the circle: ",cin>>r,areavol(r);
    cout<<"Enter the radius of the spheres: ",cin>>a,areavol(a);
    return 0;
}