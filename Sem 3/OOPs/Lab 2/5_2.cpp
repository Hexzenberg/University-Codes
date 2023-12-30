// August 2,2022
// WAP to check whether a given number is even or odd
#include<bits/stdc++.h>
using namespace std;
class c{
    int n_760;
    public:
    c(){
        cout<<"Enter a number:\n";
        cin>>n_760;
    }
    void eo(){
        cout<<((n_760%2==0)?"Even Number":"Odd Number")<<'\n';
    }
};
int main(){
    c a_760;
    a_760.eo();
    return 0;
}