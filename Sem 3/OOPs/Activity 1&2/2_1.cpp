// WAP to find the norm of a matrix. The norm is defined as the square root of the sum of squares of
// all elements in the matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s=0;
    cout<<"Enter the number of rows and columns of the matrix:\n",cin>>n>>m;
    cout<<"Enter the elements of the matrix:\n";
    int a[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j],s+=pow(a[i][j],2);
    cout<<"The norm of the matrix is: "<<sqrt(s);
    return 0;
}