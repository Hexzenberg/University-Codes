// August 2,2022
//WAP to display fibonacci series upto n
#include<bits/stdc++.h>
using namespace std;
class f{
    int n_760;
    int fi(int n_760){
        return((n_760<2)?n_760:(fi(n_760-1)+fi(n_760-2)));
    }
    public:
    f(){
        cout<<"Enter a number upto which the fibonacci series is required:\n";
        cin>>n_760;
    }
    void disp();
};
void f::disp(){
        for(int i_760=0;i_760<n_760;i_760++)cout<<fi(i_760)<<' ';
    }
int main(){
    f n_760;
    n_760.disp();
    return 0;
}