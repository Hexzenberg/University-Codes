// WAP to reverse a string using recursion.
#include<bits/stdc++.h>
using namespace std;
void r(string&s,int k){
    static int i=0;
    if(k==s.length())return;
    r(s,k+1);
    if(i<=k){char t=s[i];s[i++]=s[k],s[k]=t;}
}
int main(){
    string s;
    cout<<"Enter a string:\n",cin>>s;
    r(s,0);
    cout<<"Reversed string is:\n"<<s;
    return 0;
}