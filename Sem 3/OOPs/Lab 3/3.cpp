// August 2,2022
// Create a class distance which stores a distance in feet and inches. Input 2 distance values 
// in objects, add them, store the resultant distance in and object and display it.
// [Write the above program in two ways.
// a) store the resultant distance in the calling object:C3.add(C1,C2)
// b) return the resultant object C3=C1.add(C2)
#include<bits/stdc++.h>
using namespace std;
class Distance{
    float f_760,i_760;
    public:
        void set(){
            cin>>f_760>>i_760;
        }
        void add(Distance,Distance);
        Distance add(Distance a_760){
            Distance b_760;
            b_760.f_760=a_760.f_760+f_760;
            b_760.i_760=a_760.i_760+i_760;
            return b_760;
        }
        void disp(){
            cout<<"The Distance in feet: "<<f_760<<". The Distance in inches: "<<i_760<<'\n';
        }
};
void Distance::add(Distance a_760,Distance b_760){
    cout<<"The Distance in feet: "<<a_760.f_760+b_760.f_760<<". The Distance in inches: "<<a_760.i_760+b_760.i_760<<'\n';
}
int main(){
    Distance c1_760,c2_760,c3_760;
    cout<<"Enter the Distance in feet and inches: "<<'\n';
    c1_760.set();
    c2_760.set();
    c3_760.add(c1_760,c2_760);
    c3_760=c1_760.add(c2_760);
    c3_760.disp();
    return 0;
}