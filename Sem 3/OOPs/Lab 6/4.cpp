// Sept 6,2022
// Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two
// complex numbers. Write a main function to add two COMPLEX objects.
#include<bits/stdc++.h>
using namespace std;
class COMPLEX{
    float a[2],b[2];
    public:
        void set(){for(int i=0;i<2;i++)cin>>a[i]>>b[i];}
        friend void disp(COMPLEX);
};
void disp(COMPLEX c){cout<<"The sum is: "<<(c.a[0]+c.a[1])<<" + "<<(c.b[0]+c.b[1])<<"i";}
int main(){
    COMPLEX x;
    cout<<"Enter 2 complex numbers for their addition:\n",x.set(),disp(x);
    return 0;
}