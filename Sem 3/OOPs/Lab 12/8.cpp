// Write a program to explain class template by creating a template T for a class
// named pair having two data members of type T which are inputted by a constructor and a
// member function get-max() return the greatest of two numbers to main. Note: the value of T
// depends upon the data type specified during object creation.
#include<iostream>
using namespace std;
template<class t>class a{
    t x,y;
    public:
        a(){cout<<"Enter any two data:\n",cin>>x>>y;}
        void getmax(){cout<<((x>y)?x:y);}
};
int main(){
    a<int>o;o.getmax();
    return 0;
}