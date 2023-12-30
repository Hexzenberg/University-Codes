// Define a function template for finding the minimum value contained in
// an array. Write main() function to find the minimum value of integer array and minimum value
// of floating point numbers in an array.
#include<iostream>
using namespace std;
template<class t>
t min(t*a,int n){
    t m=a[0];
    for(int i=1;i<n;i++)if(m>a[i])m=a[i];
    return m;
}
int main(){
    int a[5]={1,2,3,4,5};float b[5]={1.1,2.2,3.3,4.4,5.5};
    cout<<"Min in int array: "<<min(a,5)<<"\nMin in float array: "<<min(b,5);
    return 0;
}