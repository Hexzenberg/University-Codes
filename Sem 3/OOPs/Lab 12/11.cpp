// Program to create a class called QUEUE with the member functions to add
// and to delete an element from the queue. Using these functions, implement a queue of
// integer and double. Demonstrate the operations by displaying the contents of the queue after
// every operation.
#include<iostream>
using namespace std;
#define MAX 100
template<class t>class queue{
    t d[MAX];
    public:
        int f,r; 
        void eq(t k){if(r<MAX)(f==-1)?d[f=r=0]=k:d[++r]=k;}
        void dq(t*k){if(f>-1)*k=d[f++];}
        void disp(){for(int i=f;i<=r;i++)cout<<d[i]<<" ";}
};
int main(){
    queue<int>o;o.f=o.r=-1;int n;
    cout<<"Enter the number of elements of the queue:\n",cin>>n,cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){int k;cin>>k,o.eq(k);}o.disp();
    return 0;
}