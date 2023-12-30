// Create a class TIME with members hour, minute and second. Write a program that adds two
// time objects.The objects must be passed as function arguments.
#include<bits/stdc++.h>
using namespace std;
class TIME{
    float h,m,s;
    public:
        void set(){cout<<"Enter time in Hours, minutes and seconds:\n",cin>>h>>m>>s;}
        void ad(TIME a,TIME b){cout<<"The sum of the time is: "<<(3600*(a.h+b.h))+(60*(a.m+b.m))+a.s+b.s<<" in seconds.";}
};
int main(){
    TIME a,b;
    a.set(),b.set(),a.ad(a,b);
    return 0;
}