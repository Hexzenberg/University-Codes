// WAP (Write a program) to print out all Armstrong numbers between 1 and 500. If sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1,t=1,r=0,s=0;float c;
    cout<<"The armstrong number between 1 and 500 are:\n";
    for(int i=1;i<=500;i++){
        while(n)r=n%10,c=pow(r,3),s+=c,n/=10;
        if(s==t)cout<<t<<" ";
        r=s=c=0,t=n=i+1;
    }
}