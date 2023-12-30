// August 2,2022
// WAP to Display 
// A
// A B
// A B C
// A B C …..
#include<bits/stdc++.h>
using namespace std;
class s{
    int n_760;
    public:
    s(){
        cout<<"Enter the range for which the pattern is needed:\n";
        cin>>n_760;
    }
    void p(){
        cout<<"The needed pattern is:\n";
        for(int i_760=0;i_760<n_760;i_760++){
            for(int j_760=0;j_760<i_760+1;j_760++){
                cout<<(char)(65+j_760)<<" ";
            }cout<<'\n';
        }
    }
};
int main(){
    s a_760;
    a_760.p();
    return 0;
}