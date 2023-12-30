// WAP to sort a set of names stored in an array in alphabetical order.
#include<bits/stdc++.h>
using namespace std;
bool c(string a,string b){return a<b;}
vector<string>sort(vector<string>a){
	sort(a.begin(),a.end(),c);
	return a;
}
int main(){   
	int n;
	cout<<"Enter the number of names:\n",cin>>n;
	vector<string>s(n);
    cout<<"Enter the names:\n";
	for(int i=0;i<n;i++)cin>>s[i];
	s=sort(s);
	cout<<"After sorting in alphabetical order:\n";
	for(int i=0;i<s.size();i++)cout<<s[i]<<" ";
	return 0;
}
