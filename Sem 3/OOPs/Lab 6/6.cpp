// Sept 6,2022
// Write a program to perform addition of two complex numbers using constructor. Complex
// numbers are given through user input.
#include<bits/stdc++.h>
using namespace std;
class COMPLEX{
    float a[2],b[2];
    public:
        COMPLEX(){
            cout<<"Enter 2 complex numbers for their addition:\n";
            for(int i=0;i<2;i++)cin>>a[i]>>b[i];
        }
        friend void disp(COMPLEX);
};
void disp(COMPLEX c){cout<<"The sum is: "<<(c.a[0]+c.a[1])<<" + "<<(c.b[0]+c.b[1])<<"i";}
int main(){
    COMPLEX x;
    disp(x);
    return 0;
}