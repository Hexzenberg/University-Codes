// 13 Sept,2022
// WAP to demonstrate the order of call of constructor and destructors for a class.
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
        a(){cout<<"Enter the constructor.\n";}
        ~a(){cout<<"Destructor Called.\n";}
};
int main(){
    a s;
    return 0;
}