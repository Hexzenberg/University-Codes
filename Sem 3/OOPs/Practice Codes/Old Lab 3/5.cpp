//August 2,2022
// Create a class which stores name, author and price of a book. Store information for n number of books.
// Display information of all the books in a given price range using friend function.
#include<bits/stdc++.h>
using namespace std;
class b{
    string n,a;
    float p;
    public:
    b(){
        cout<<"Enter the name of the book and its author along with its price:\n";
        cin>>n>>a>>p;
    }
    friend void disp(b);
};
void disp(b x){
    cout<<"The name of the book is: "<<x.n<<". The name of its author is: "<<x.a<<" The price of the book is: "
    <<x.p<<'\n';
}
#define ll long long
int main(){
    int n;
    cout<<"Enter the number of books:\n";
    cin>>n;
    b x[n];
    for(int i=0;i<n;i++)x[i];
    for(int i=0;i<n;i++)disp(x[i]);
    return 0;
}