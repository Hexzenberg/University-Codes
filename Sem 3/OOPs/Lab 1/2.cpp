//19 July,2022
//WAP to input name, roll number and marks in 5 subjects for n number of students. Write 
// functions to:-
// a. Find total marks and percentage of all n students.
// b. Display details of a student with a given roll number.
// c. Display the details for all the students having percentage in a given range.
// d. Sort the array in ascending order of marks.
#include<bits/stdc++.h>
using namespace std;
struct s{
  char name[30];
  int r,m[5];
  void get();
  void disp();
  int per(int,int);
  void sort(){
    for(int i=0;i<4;i++){
      for(int j=i+1;j<5;j++){
        if(m[i]>m[j]){
          int t=m[i];
          m[i]=m[j];
          m[j]=t;
        }
      }
    }disp();
  }
  void num(int a){
    if(a==r)disp();
    else cout<<"Invalid Roll Number.\n";
  }
};
void s::get(){
  cout<<"Enter name of the student:\n";
  cin>>name;
  cout<<"Enter the roll number of the student:\n";
  cin>>r;
  cout<<"Enter the marks of the student:\n";
  for(int i=0;i<5;i++)cin>>m[i];
}
void s::disp(){
  cout<<"Name of the student is "<<name<<'\n';
  cout<<"Roll number :"<<r<<"\nMarks :\t";
  for(int i=0;i<5;i++)cout<<m[i]<<"\t";
  cout<<'\n';
  int n=0;
  for(int i=0;i<5;i++)n+=m[i];
  cout<<"Total marks: "<<n<<" percentage of the student: "<<(float)n/5<<'\n';
}
int s::per(int p,int q){
  int t=0;
  for(int i=0;i<5;i++)t+=m[i];
  return((t/5>=p&&t/5<=q)?1:0);
}
int main(){
  int n,p,q,a;
  cout<<"Enter no.of students: ";
  cin>>n;
  s *x=new s[n];
  for(int i=0;i<n;i++)(x+i)->get();
  cout<<"Student Information\n";
  for(int i=0;i<n;i++)(x+i)->disp();
  cout<<"Enter the desired roll number to display the students information:\n";
  cin>>a;
  x->num(a);
  cout<<"Enter the range of percentages:\n";
  cin>>p>>q;
  cout<<"The students information between the percentage range "<<p<<" and "<<q<<" are:\n";
  for(int i=0;i<n;i++){if((x+i)->per(p,q))(x+i)->disp();else cout<<"No students in this range.\n";}
  cout<<"The student information after sorting the marks:\n";
  for(int i=0;i<n;i++)(x+i)->sort();
  return 0;
}