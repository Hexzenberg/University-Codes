// Create a class which stores account number, customer name and balance. 
// Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. 
// The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the over-due amount. 
// Include member functions in the appropriate class for-deposit money
// -withdraw [For saving account minimum balance should be checked.]
//  [For current account overdue amount should be calculated.]-display balance
#include<bits/stdc++.h>
using namespace std;
class account{
    protected:
    double acno,bal;
    string name;
    public:
        account(){
            cout<<"Enter the a/c no and name of account holder:\n",cin>>acno>>name;
            cout<<"Enter the balance of money present now:\n",cin>>bal;
        }
};
class savings:public account{
    protected:
    double min,d,wd,a;
    public:
        savings(){cout<<"Enter the minimum balance allowed by the bank:\n",cin>>min;}
        void wit(){
            cout<<"Enter 1 to withdraw money and 2 to deposit money:\n",cin>>a;
            if(a==1){
                cout<<"Name of account holder: "<<name<<" and their a/c no is: "<<acno<<'\n';
                cout<<"Balance amount present in the account: Rs. "<<bal<<'\n';
                cout<<"Enter the amount to withdraw:\n",cin>>wd,bal-=wd;
                if(min>bal)cout<<"The remaining balance is lower than the minimum allowed balance!\n";
                else cout<<"The remaining balance is: Rs. "<<bal<<'\n';
            }
            else{
                cout<<"Name of account holder: "<<name<<" and their a/c no is: "<<acno<<'\n';
                cout<<"Balance amount present in the account: Rs. "<<bal<<'\n';
                cout<<"Enter the deposit amount:\n",cin>>d,bal+=d;
                cout<<"The balance remaining after deposit: Rs. "<<bal<<'\n';
            }
        }
};
class current:public account{
    protected:
    double d,wd,a,od;
    public:
        current(){cout<<"Enter the overdue:\n",cin>>od,bal-=od;}
        void cal(){
            cout<<"Enter 1 to withdraw money and 2 to deposit money:\n",cin>>a;
            if(a==1){
                cout<<"Name of account holder: "<<name<<" and their a/c no is: "<<acno<<'\n';
                cout<<"Balance amount present in the account after taking out the overdue: Rs. "<<bal<<'\n';
                cout<<"Enter the amount to withdraw:\n",cin>>wd,bal-=wd;
                if(wd>bal)cout<<"Entered amount is not present in the account after deducting overdue!\n";
                else cout<<"The remaining balance is: Rs. "<<bal<<'\n';
            }
            else{
                cout<<"Name of account holder: "<<name<<" and their a/c no is: "<<acno<<'\n';
                cout<<"Balance amount present in the account after taking out the overdue: Rs. "<<bal<<'\n';
                cout<<"Enter the deposit amount:\n",cin>>d,bal+=d;
                cout<<"The balance remaining after deposit: Rs. "<<bal<<'\n';
            }
        }
};
int main(){
    savings s;s.wit();
    current c;c.cal();
}