// Design a template Stack which can work with either a Student record or an
// Employee record. A Student record contains name, rollNo and cgpa. An Employee record
// contains name, empId and salary fields. Provide push, pop, display functions to the template
// stack class.
#include<iostream>
using namespace std;
#define MAX 100
template<class t1=char,class t2=int,class t3=float>class stack{
    t1 d[MAX];t2 e[MAX];t3 f[MAX];
    public:
        int top;
        void ps(t1 n,t2 r,t3 c){d[++top]=n,e[top]=r,f[top]=c;}
        void os(t1*k,t2*l,t3*m){if(top!=-1)*k=d[top],*l=e[top],*m=f[top--];}
        void ds(){t1 k;t2 l;t3 m;if(top!=-1)os(&k,&l,&m),cout<<k<<" "<<l<<" "<<m<<'\n',ds(),ps(k,l,m);}
};
int main(){
    stack<string,int,float>a;a.top=-1;int n;cout<<"Enter the number of elements of the stack:\n",cin>>n;
    cout<<"Enter the elements of the stack:\n";
    for(int i=0;i<n;i++){string m;int r;float c;cin>>m>>r>>c;a.ps(m,r,c);}a.ds();
    return 0;
}