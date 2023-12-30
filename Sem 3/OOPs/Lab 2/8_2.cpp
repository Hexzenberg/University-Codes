// August 2,2022
// WAP to check a number is Palindrome or not.
#include<bits/stdc++.h> 
using namespace std;  
class s{
    int n_760,r_760,s_760=0,t_760;
    public:
    s(){
        cout<<"Enter the Number:\n";    
        cin>>n_760;    
    }    
    void p(){
        t_760=n_760;    
        while(n_760){    
            r_760=n_760%10;    
            (s_760*=10)+=r_760;    
            n_760=n_760/10;    
        }
        cout<<((t_760==s_760)?"Number is Palindrome.":"Number is not palindrome.");
    }
};
int main(){  
    s a_760;
    a_760.p();
    return 0;  
}  