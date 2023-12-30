// Sept 6,2022
// Create a 'DISTANCE' class with the following members:
// Data Members
// b) feet and inches
// Member Functions
// d) To input distance through constructor
// e) To output distance
// f) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances (one through
// implicit call and other explicit call and output the sum.
#include<bits/stdc++.h>
using namespace std;
class DISTANCE{
    public:
        float f,i;
        DISTANCE(){cout<<"Enter the distance in feet and inches:\n",cin>>f>>i;}
        void disp(){cout<<"The distance is :"<<f<<" feet and "<<i<<" inches\n";}
        void ad(DISTANCE b){cout<<"The sum is: "<<f+b.f<<" feet and "<<i+b.i<<" inches.";}
};
int main(){
    DISTANCE a,b;
    a.disp(),b.disp(),a.ad(b);
    return 0;
}