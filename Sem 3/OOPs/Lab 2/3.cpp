// July 26,2022
// Modify the program 2_2lab.cpp to store marks in 5 subjects. Calculate the total marks and 
// percentage of a student and display it.
#include<bits/stdc++.h>
using namespace std;
class s{
 int r_760,m_760[5],t_760=0;
 string n_760;
 public:
    s(){
        string n_760;
        int r_760,m_760[5];
        cin>>n_760>>r_760;
        for(int i=0;i<5;i++){
            cin>>m_760[i];
            this->m_760[i]=m_760[i];
            t_760+=m_760[i];
        }
        this->n_760=n_760;
        this->r_760=r_760;
    }
    void disp(){
      cout<<"The name of the student is: "<<n_760<<". Their roll number is: "<<r_760<<". Their total marks is: "
      <<t_760<<". Their percentage is: "<<(float)t_760/5<<"%"<<'\n';
    }
};
int main(){
    cout<<"Enter Name, roll number and marks in 5 subjects for a student:"<<'\n';
    s a_760;
    a_760.disp();
    return 0;
}