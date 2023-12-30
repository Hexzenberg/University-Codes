// Program to find the GCD of n numbers.
// Input: n=6
// 5 10 25 45 95 65
// Output: 5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0,l=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i]%a[0]==0)k=0;
        else {k=1;break;}
    }
    if(k==0){cout<<a[0];return 0;}
    else{
        k=0;
        for(int i=(a[0]/2)-1;i>=1;i--){
            if(a[0]%i==0)k=i;
            if(k){
                for(int i=1;i<n;i++){
                    if(a[i]%k==0)l=0;
                    else {l=1;break;}
                }if(l==0){cout<<k;return 0;}
            }
        }cout<<1;return 0; 
    }
}