// Modify program nl2_5.cpp that if no argument will be given it will display error message and
// the program will work for both integer and float data types.
#include<bits/stdc++.h>
using namespace std;
void sum(int a=-1,int b=10,int c=20){((a==-1)?cout<<"ERROR":cout<<"The sum of the numbers: "<<(a+b+c))<<'\n';}
void s(float a=-1,float b=10,float c=20){((a==-1)?cout<<"ERROR":cout<<"The sum of the numbers: "<<(a+b+c))<<'\n';}
int main(){
    int a,b,c,d;
    float x,y,z;
    cout<<"Enter 0 for int 1 for float:\n",cin>>d;
    cout<<"Enter any three numbers:\n",((d==0)?(cin>>a>>b>>c,sum(),sum(a),sum(a,b),sum(a,b,c)):(cin>>x>>y>>z,s(),s(x),s(x,y),s(x,y,z)));
    return 0;
}