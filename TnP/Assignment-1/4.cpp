// Program to find sum of the prime factors of a number.
// Input: n=100
// Output: 2+5=7
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0,l=0;cin>>n;int a[k];
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            for(int j=1;j<=i;j++){
                if(i%j==0)l++;
            }if(l==2)a[k++]=i;l=0;
        }
    }l=0;
    for(int i=0;i<k;i++)l+=a[i];
    cout<<l;
    return 0;
}