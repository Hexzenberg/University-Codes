// WAP to concatenate three strings using recursion.
#include<bits/stdc++.h>
using namespace std;
void c(string s1,string s2){
	static int i=0,j=s1.size();
    (!s2[i])?s2[i]='\0':s1[i+j]=s2[i],i++,c(s1,s2);
}
int main(){
    string s1,s2,s3;  
    cout<<"Enter the strings:\n",cin>>s1>>s2>>s3;
    c(s1,s2),c(s1,s3);
	cout<<"Combined strings\n"<<s1;
    return 0;
}