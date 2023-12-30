// Program to print first n non-fobo numbers. First n numbers not in Fibonacci series. 
// 0 1 1 2 3 5 8 13……
// Input: n=5
// Output: 4 6 7 9 10
#include<bits/stdc++.h>
using namespace std;
int fi(int n){return(n==0?0:n==1?1:fi(n-1)+fi(n-2));}
int main(){
    int n,k=0,b;cin>>n;int a[2*n];
    for(int i=0;i<2*n;i++)a[i]=0;
    for(int i=0;i<2*n;i++)a[i]=fi(i);b=n;
    for(int i=0;b;i++){
        for(int j=0;j<2*n;j++){
            if(i==a[j]){k=1;break;}
        }if(k==0){cout<<i<<" ";b--;}k=0;
    }
    return 0;
}