// July 26,2022
// WAP to calculate factorial of a given number
#include<bits/stdc++.h>
using namespace std;
int fact(int n_760){
    return((n_760<2)?1:(n_760*fact(n_760-1)));
}
int main(){
    int n_760;
    cout<<"Enter the number:\n";
    cin>>n_760;
    cout<<"The factorial of the number: "<<fact(n_760);
    return 0;
}