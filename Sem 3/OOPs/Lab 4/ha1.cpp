// Write a rogram to compute absolute value of a number (integer or float) by using function
// overloading for computation of absolute value. The number is entered through keboard.
#include<bits/stdc++.h>
using namespace std;
float a(float f){return abs(f);}
float a(int i){return abs(i);}
int main(){
    int x;
    float y;
    cout<<"Enter any integer and floating point number: \n",cin>>x>>y;
    cout<<"Absolute value of integer is: "<<a(x)<<" and that of the float is: "<<a(y);
    return 0;
}