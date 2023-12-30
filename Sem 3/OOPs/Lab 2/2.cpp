// 26 July,2022
// Create a class which stores name, roll number and total marks for a student. Input the data 
// for a student and display it.
#include<bits/stdc++.h>
using namespace std;
class s{
    int r_760,m_760;
    string n_760;
    public:
        void set(){
            string n_760;
            int r_760,m_760;
            cin>>n_760>>r_760>>m_760;
            this->n_760=n_760;
            this->r_760=r_760;
            this->m_760=m_760;
        }
        void disp(){
            cout<<"The name of the student is: "<<n_760<<". Their roll number is: "<<r_760
            <<" and their total marks:"<<m_760<<" out of 500."<<'\n';
        }
};
int main(){
    s a_760;
    cout<<"Enter Name, roll number and total marks for a student:"<<'\n';
    a_760.set();
    a_760.disp();
    return 0;
}