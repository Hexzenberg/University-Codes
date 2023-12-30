// Oct 11,2022
// Write a program to create a class called STUDENT with data members Roll Number, Name
// and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields
// a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all
// UG and PG students separately.
#include<bits/stdc++.h>
using namespace std;
class STUDENT{
    public:
        int r,a;string n;
        STUDENT(){cout<<"Enter the name, roll number and age of the student:\n",cin>>n>>r>>a;}
};
class UGSTUDENT:public STUDENT{
    int s,f,st;
    public:
        void set(){cout<<"Enter the semester,fees and stipend:\n",cin>>s>>f>>st;}
};
class PGSTUDENT:public STUDENT{
    int s,f,st;
    public:
        void set(){cout<<"Enter the semester,fees and stipend:\n",cin>>s>>f>>st;}
};
int main(){
    int k,l,t=0;
    cout<<"Enter the number of UG students:\n",cin>>k;
    UGSTUDENT a[k];
    for(int i=0;i<k;i++)a[i].set(),t+=a[i].a;
    cout<<"The average age of the UG students: "<<(float)t/k<<"\nEnter the number of PG students:\n",cin>>l,t=0;
    PGSTUDENT b[l];
    for(int i=0;i<l;i++)b[i].set(),t+=b[i].a;
    cout<<"The average age of the PG students: "<<(float)t/l;
    return 0;
}