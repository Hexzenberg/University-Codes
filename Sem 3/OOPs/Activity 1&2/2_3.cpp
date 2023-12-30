// WAP to remove characters in string except alphabets
#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=0;
    string s,a;
    cout<<"Enter the string:\n",cin>>s;
    for(int i=0;i<s.length();i++)if(s[i]>64&&s[i]<91||s[i]>96&&s[i]<123)a[c++]=s[i];
    cout<<"String after removing elements other than the alphabets:\n";
    for(int i=0;i<c;i++)cout<<a[i];
    return 0;
}