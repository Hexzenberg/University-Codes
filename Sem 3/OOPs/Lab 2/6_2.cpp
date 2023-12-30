// August 2,2022
// WAP to calculate factorial of a given number
#include<bits/stdc++.h>
using namespace std;
class f{
    int n_760;
    int fact(int n_760){
        return((n_760<2)?1:(n_760*fact(n_760-1)));
    }
    public:
    void s(){
        cout<<"Enter the number:\n";
        cin>>n_760;    
    }
    void disp(){
        cout<<"The factorial of the number: "<<fact(n_760);
    }
};
int main(){
    f a_760;
    a_760.s();
    a_760.disp();
    return 0;
}