//19 July,2022
// WAP to enter id, name, age and basic salary of n number of employees. Calculate the 
// gross salary of all the employees and display it along with all other details in a tabular 
// form, using pointer to structure.
// [ Gross salary= Basic salary + DA + HRA, 
// DA = 80% of Basic salary HRA=10% of 
// Basic salary ]
#include<bits/stdc++.h>
using namespace std;
struct e{
    int id,a;
    float bs;
    char c[50];
};
int main(){
    int n;
    cout<<"Enter the number of Employees:\n";
    cin>>n;
    e *s=new e[n];
    for(int i=0;i<n;i++){
        cout<<"Enter id, Name, Age and the basic salary of employee "<<i+1<<": "<<'\n';
        cin>>(s+i)->id>>(s+i)->c>>(s+i)->a>>(s+i)->bs;
    }
    cout<<"Employee\t"<<"Name\t"<<"Age\t"<<"Basic Salary\t"<<"Gross Salary\n";
    for(int i=0;i<n;i++)cout<<i+1<<'\t'<<'\t'<<(s+i)->c<<'\t'<<(s+i)->a<<'\t'<<(s+i)->bs<<'\t'<<'\t'<<(s+i)->bs+(0.9*(s+i)->bs)<<'\n';
    return 0;
}