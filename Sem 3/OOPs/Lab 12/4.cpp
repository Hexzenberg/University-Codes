// Write a program to demonstrate the concept behind function templates with non-type 
// as function parameters by taking sorting an array of numbers as an examples.
// C++ program to implement bubble sort
// by using Non-type as function parameters
#include<iostream>
using namespace std;
template<class t,int n>
void bs(t*a){for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){t k=a[j];a[j]=a[j+1],a[j+1]=k;}}
template<class t,int n>
void p(t*a){for(int i=0;i<n;i++)cout<<a[i]<<" ";}
int main(){
	float a[]={1.1,2.2,3.3,4.2,4.4,5.5 };
	bs<float,sizeof(a)/sizeof(a[0])>(a),p<float,sizeof(a)/sizeof(a[0])>(a);
	return 0;
}
