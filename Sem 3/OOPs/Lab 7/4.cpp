// Sept 13,2022
// WAP to demonstrate all types of inheritance.
#include<bits/stdc++.h>
using namespace std;
class a{};
class e{};
class b:public a{
    public:
        void disp(){cout<<"Single inheritance.\n";}
        void dis(){cout<<"Hierarchical inheritance.\n";}
};
class c:public b{
    public:
        void disp(){cout<<"multilevel inheritance.\n";}
};
class d:public a{
    public:
        void disp(){cout<<"Hierarchical inheritance.\n";}
};
class f:public a,e{
    public:
        void disp(){cout<<"Multiple inheritance.\n";}
};
int main(){
    b x;c y;d g;f h;
    x.disp(),x.dis(),g.disp(),y.disp(),h.disp();
    return 0;
}