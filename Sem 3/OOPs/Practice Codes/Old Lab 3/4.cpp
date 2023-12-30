//August 2,2022
// Create a class which stores name, roll number and total marks for a student. Input data for n students. 
// Find the average marks scored by n students, store it as a data member of 
// the class and display it using a function which may be called without object.
#include<bits/stdc++.h>
using namespace std;
class s{
    string c;
    int r,m;
    public:
    void set(){
        cout<<"Enter the name, roll number and total marks of the student:\n";
        cin>>c>>r>>m;
    }
    friend void disp(s*,int);
};
void disp(s a[],int n){
    int t=0;
    for(int i=0;i<n;i++)t+=a[i].m;
    cout<<"The average of total marks secured by "<<n<<" students is: "<<(float)t/n<<'\n';
}
int main(){
    int n;
    cout<<"Enter the number of students:\n";
    cin>>n;
    s a[n];
    for(int i=0;i<n;i++)a[i].set();
    disp(a,n);
    return 0;
}