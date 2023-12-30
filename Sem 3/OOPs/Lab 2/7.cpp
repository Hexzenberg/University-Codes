//July 26,2022
//WAP to display fibonacci series upto n.
#include<bits/stdc++.h>
using namespace std;
int f(int n_760){
    return((n_760<2)?n_760:(f(n_760-1)+f(n_760-2)));
}
int main(){
    int n_760;
    cout<<"Enter a number upto which the fibonacci series is required:\n";
    cin>>n_760;
    for(int i_760=0;i_760<n_760;i_760++)cout<<f(i_760)<<' ';
    return 0;
}