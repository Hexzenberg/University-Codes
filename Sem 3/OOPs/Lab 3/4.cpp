// August 2,2022
// Create a class which stores id, name, age and basic salary of an employee. Input data for 
// n number of employees. Calculate the gross salary of all the employees and display it 
// along with all other details in a tabular form.
// [Gross salary= Basic salary + DA + HRA, DA = 80% of Basic salary HRA=10% of Basic salary ]
#include<bits/stdc++.h>
using namespace std;
class e{
        int id_760,a_760;
        float bs_760;
        string c_760;
    public:
        void set(){
            cout<<"Enter id, Name, Age and the basic salary of employee:\n";
            cin>>id_760>>c_760>>a_760>>bs_760;
        }
        void disp(){
            cout<<id_760<<'\t'<<'\t'<<c_760<<'\t'<<a_760<<'\t'<<bs_760<<'\t'<<'\t'<<bs_760+(0.9*bs_760)<<'\n';   
        }
};
int main(){
    int n_760;
    cout<<"Enter the number of Employees:\n";
    cin>>n_760;
    e*s_760=new e[n_760];
    for(int i=0;i<n_760;i++)(s_760+i)->set();
    cout<<"Employee id"<<'\t'<<"Name"<<'\t'<<"Age"<<'\t'<<"Basic Salary"<<'\t'<<"Gross Salary\n";
    for(int i=0;i<n_760;i++)(s_760+i)->disp();
    delete []s_760;
    return 0;
}