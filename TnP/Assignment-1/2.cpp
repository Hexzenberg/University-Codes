// Program to print nth Fibonacci number. 0 1 1 2 3 5 8 13 21…….
// Input: n=7
// Output: 8
#include<bits/stdc++.h>
using namespace std;
int fi(int n){return(n==0?0:n==1?1:fi(n-1)+fi(n-2));}
int main(){
    int n;cin>>n;
    cout<<fi(n-1);
    return 0;
}