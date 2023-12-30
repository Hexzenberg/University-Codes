//  By changing the number of arguments or by having different types of arguments to a function,
// function overloading can be achieved. Write a program to demonstrate these two concepts by
// taking addition of numbers as an example. Use ADD function name for function overloading
// purpose
#include<bits/stdc++.h>
using namespace std;
void sum(int a,int b){cout<<"The sum of the numbers: "<<a+b<<'\n';}
void sum(int a,int b,int c){cout<<"The sum of the numbers: "<<a+b+c<<'\n';}
void sum(float a,float b){cout<<"The sum of the numbers: "<<a+b<<'\n';}
void sum(float a,float b,float c){cout<<"The sum of the numbers: "<<a+b+c<<'\n';}
int main(){
    int a,b,c;
    float x,y,z;
    cout<<"Enter any three integers:\n",cin>>a>>b>>c;
    sum(a,b),sum(a,b,c);
    cout<<"Enter any three floating pts:\n",cin>>x>>y>>z;
    sum(x,y),sum(x,y,z);
    return 0;
}