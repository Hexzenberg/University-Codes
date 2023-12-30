// Sept 6,2022
// Create a class called 'TIME' that has three integer data members for hours, minutes and
// seconds, a constructor to initialize the object to some constant value, member function to
// add two TIME objects, member function to display time in HH:MM:SS format. Write a main
// function to create two TIME objects, add them and display the result in HH:MM:SS format.
#include<bits/stdc++.h>
using namespace std;
class Time{
    public:
        int h,m,s;
        Time(){cin>>h>>m>>s;}
        void add(Time b){cout<<"The sum: "<<(h+b.h)+((m+b.m)/60+(s+b.s)/3600)<<":"<<(m+b.m)%60+((s+b.s)/60)<<":"<<(s+b.s)%60<<'\n';}
};
int main(){
    cout<<"Enter two times in hours minutes and seconds:\n";
    Time a[2];
    a[0].add(a[1]);
    return 0;
}