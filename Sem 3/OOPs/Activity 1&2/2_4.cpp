// WAP to input a two dimensional array and print lower triangular matrix and upper triangular matrix.
// Lower triangular matrix is a matrix which contains elements below principle diagonal including
// principle diagonal elements and rest of the elements are 0. Upper triangular matrix is a matrix which
// contains elements above principle diagonal including principle diagonal elements and rest of the
// elements are 0.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the matrix:\n",cin>>n;
    int a[n][n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    cout<<"Upper triangular matrix:\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<((i<=j)?a[i][j]:0)<<" ";cout<<'\n';}
    cout<<"Lower triangular matrix:\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<((i>=j)?a[i][j]:0)<<" ";cout<<'\n';}
    return 0;
}