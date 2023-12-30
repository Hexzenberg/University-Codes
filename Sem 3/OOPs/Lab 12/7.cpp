// Write a class template to represent a generic vector. Include member
// functions to perform the following tasks:
//  To create the vector.
//  To modify the value of a given element.
//  To multiply the vector by a scalar value.
//  To display the vector in the form (10, 20, 30,…..)
#include<iostream>
#include<vector>
using namespace std;
template<class t>class a{
    t n;vector<t>v;
    public:
        void cr(){
            cout<<"Enter the size of the vector:\n",cin>>n,cout<<"Enter the values of the vector:\n";t x;
            for(int i=0;i<n;i++)cin>>x,v.push_back(x);
        }
        void m(t s,int p){v[p]=s;}
        void s(t p){for(int i=0;i<n;i++)v[i]*=p;}
        void disp(){for(int i=0;i<n-1;i++)cout<<v[i]<<", ";cout<<v[n-1]<<endl;}
};
int main(){
    a<int>o;o.cr(),o.s(3),o.disp();
    return 0;
}