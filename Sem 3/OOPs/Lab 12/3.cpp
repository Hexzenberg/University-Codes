// Write a template function to search for a given key element from an
// array. Illustrate how you perform search in integer, character as well as double arrays using the
// same template function.
#include<iostream>
using namespace std;
template<class t>
void s(t*a,int n,t v){int s=0;
    for(int i=0;i<n;i++)if(a[i]==v)s=1;
    cout<<(s?"Present\n":"Not present\n");
}
int main(){
    int a[5]={1,2,3,4,5};double b[5]={1.1,2.2,3.3,4.4,5.5};
    s(a,5,7),s(b,5,2.2);
    return 0;
}