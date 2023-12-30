// Program to check whether a number is a Harshad number or not. Harshad 
// Number is an integer that is divisible by the sum of its digits.
// Input: 1729
// Output: Harshad Number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s=0;cin>>n;k=n;
    while(k){
        int r=k%10;
        s+=r;
        k/=10;
    }cout<<(n%s==0?"HARSHAD NUMBER":"NON HARSHAD NUMBER");
    return 0;
}