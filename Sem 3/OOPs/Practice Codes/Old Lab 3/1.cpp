//August 2,2022
// WAP to swap private data member of two classes.  [The classes have no relation with each other].
#include<bits/stdc++.h>
using namespace std;
class b;
class a{
    int x;
    public:
    a(){
        cout<<"Enter the first value:\n";
        cin>>x;
    }
    friend void s(a,b);
    friend void d(a,b);
};
class b{
    int y;
    public:
    b(){
        cout<<"Enter the second value:\n";
        cin>>y;
    }
    friend void s(a,b);
    friend void d(a,b);
};
void s(a n,b m){
    int t=n.x;
    n.x=m.y;
    m.y=t;
    cout<<"The numbers after swapping are "<<n.x<<" and "<<m.y<<'\n';
}
void d(a n,b m){
    cout<<"The number are "<<n.x<<" and "<<m.y<<'\n';
}
int main(){
    a n;
    b m;
    d(n,m);
    s(n,m);
    return 0;
}
