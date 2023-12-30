// August 2,2022
// Create a class which stores x and y coordinates of a point. Calculate distance between two 
// given points and display it.
#include<bits/stdc++.h>
using namespace std;
class c{
    float a_760[2],b_760[2];
    public:
        void set(){
            for(int i=0;i<2;i++)cin>>a_760[i]>>b_760[i];
        }
        void calc(){
            cout<<"The distance between the two points is: "<<sqrt((pow((a_760[1]-a_760[0]),2)+pow((b_760[1]-b_760[0]),2)))
            <<" units."<<'\n';
        }
};
int main(){
    c a_760;
    cout<<"Enter the x co-ordinate followed by the y co-ordinate of two points:"<<'\n';
    a_760.set();
    a_760.calc();
    return 0;
}