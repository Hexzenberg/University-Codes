//August 2,2022
//WAP to calculate the series 1-2/2!+3/3!-4/4!+…+n/n!
#include<bits/stdc++.h>
using namespace std;
class c{
    int n_760;
    float s_760=0;
    int fact(int n_760){
        return((n_760<2)?1:(n_760*fact(n_760-1)));
    }
    public:
    c(){
        cout<<"Enter the range of the series:\n";
        cin>>n_760;
    }
    void disp(){
        for(int i_760=1;i_760<=n_760;i_760++){
            if(i_760%2!=0)s_760+=((float)i_760/fact(i_760));
            else s_760-=((float)i_760/fact(i_760));
        }
        cout<<"The value of the series upto "<<n_760<<" terms is: "<<s_760<<'\n';
    }
};
int main(){
    c a_760;
    a_760.disp();
    return 0;
}