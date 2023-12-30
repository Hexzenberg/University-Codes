// July 26,2022
// WAP to Display 
// A
// A B
// A B C
// A B C …..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n_760;
    cout<<"Enter the range for which the pattern is needed:\n";
    cin>>n_760;
    for(int i_760=0;i_760<n_760;i_760++){
        for(int j_760=0;j_760<i_760+1;j_760++){
            cout<<(char)(65+j_760)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}