// Program to print nth prime number.
// Input: n=5
// Output: 11
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0,p;cin>>n;
    for(int i=2;n>0;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)k++;
        }if(k==2)n--;k=0;
        p=i;
    }cout<<p;
    return 0;
}