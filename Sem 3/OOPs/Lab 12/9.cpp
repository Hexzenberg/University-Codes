// Design a generic stack class which can be used to create integer, character
// or floating point stack objects. Provide all necessary data members and member functions
// (push, pop, display & default constructor) to operate on the stack.
#include<iostream>
using namespace std;
#define MAX 100
template<class t>class stack{
    t d[MAX];
    public:
        int top=-1; 
        stack(){
            int n;cout<<"Enter the length of the stack:\n",cin>>n,cout<<"Enter the elements:\n";
            for(int i=0;i<n;i++)cin>>d[++top];
        }
        void push(t k){if(top<MAX)d[++top]=k;}
        void pop(t*k){if(top!=-1)*k=d[top--];}
        void disp(){t k;if(top==-1)return;pop(&k),cout<<k<<" ",disp(),push(k);}
};
int main(){
    stack<int>o;o.disp();
    return 0;
}