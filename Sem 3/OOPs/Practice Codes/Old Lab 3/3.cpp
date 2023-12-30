//August 2,2022
// Create a class with an integer data member. Include functions for input and output in class. 
// Count the number of times each function is called and display it.
#include<bits/stdc++.h>
using namespace std;
static int a=0;
class c{
    int n;
    public:
    void set(){
        cout<<"Enter the number:\n";
        cin>>n;
        a++;
        cout<<"The number of times the functions are called: "<<a<<'\n';
    }
    void disp(){
        a++;
        cout<<"The set number is: "<<n<<" and the number of times the functions are called "<<a<<'\n';
    }
};
int main(){
    c a,b;
    a.set();
    a.disp();
    b.set();
    b.disp();
    return 0;
}