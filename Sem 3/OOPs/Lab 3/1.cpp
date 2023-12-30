// August 2,2022
// WAP to store marks in 5 subjects of a student. Calculate the total marks and  percentage and 
// grade of a student and display it.
#include<bits/stdc++.h>
using namespace std;
class s{
    int r_760,m_760[5],t_760=0;
    string n_760;
    public:
        s(){
            cin>>n_760>>r_760;
            for(int i=0;i<5;i++){
                cin>>m_760[i];
                t_760+=m_760[i];
            }
        }
        void disp(){
            cout<<"The name of the student is: "<<n_760<<".\nTheir roll number is: "<<r_760<<'\n';
            for(int i=0;i<5;i++)cout<<"Subject"<<i+1<<": "<<m_760[i]<<'\n';
            cout<<"Their total marks is: "<<t_760<<".\nTheir percentage is: "<<(float)t_760/5<<"%\n"<<"Their Grade is: "
            <<((((float)t_760/5)>90)?"O":(((float)t_760/5)>80)?"E":(((float)t_760/5)>70)?"A":(((float)t_760/5)>60)?"B":(((float)t_760/5)>50)?"C":(((float)t_760/5)>40)?"D":"F");
        }
};
int main(){
    cout<<"Enter Name, roll number and marks in 5 subjects for a student:"<<'\n';
    s a_760;
    a_760.disp();
    return 0;
}