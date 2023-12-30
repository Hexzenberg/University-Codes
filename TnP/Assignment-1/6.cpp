// Program to convert a number from decimal to binary
// Input: 5
// Output: 0101
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l=0;cin>>n;k=n;int a[l];
    while(n){
        a[l++]=n%2;
        n/=2;
    }for(int i=l-1;i>=0;i--)cout<<a[i]<<" ";
    return 0;
}