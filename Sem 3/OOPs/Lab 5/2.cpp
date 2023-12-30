// Write a program to enter the code, name and price of items. The user must feed the quantity in
// which he wants a product. The program must calculate and display the final bill of 10 nitems.
// In the following format.
// Sl. No. Code Name Price Quantity Total
// ------------------------------------------------------------------------
// 1. rib001 Printercatrige 300 2 600
// 2. Pap45 A4 size paper 200 0 0
// 3. Bk2109 Computer book 350 5 1750
// --------------------------------------------------------------------------
// Total = Rs.2350/-
#include<bits/stdc++.h>
using namespace std;
class c{
    int p[3],q[3],t=0;
    string c[3],n[3];
    public:
        void set(){
            cout<<"Enter the code, name, price and quantity of 3 items:\n";
            for(int i=0;i<3;i++){cin>>c[i],getline(cin,n[i]),cin>>p[i]>>q[i];t+=(p[i]*q[i]);}
        }
        void d(){
            cout<<"Sl.No.\tCode\tName\t\tPrice\tQuantity  Total\n--------------------------------------------------------\n";
            for(int i=0;i<3;i++)cout<<i+1<<'\t'<<c[i]<<'\t'<<n[i]<<"\t"<<p[i]<<'\t'<<q[i]<<"\t  "<<p[i]*q[i]<<'\n';
            cout<<"--------------------------------------------------------\n\t\t\t\t\tTotal = Rs."<<t<<"\\-";
        }
};
int main(){
    c o;
    o.set(),o.d();
    return 0;
}