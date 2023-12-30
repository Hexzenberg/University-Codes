// Modify the program 1 by creating an array of n objects using pointers. Show the details of
// n items by using pointers to object concept
#include<iostream>
using namespace std;
class Item{
    int n,p;
    public:
        Item(){cout<<"Enter the item number and the price:\n",cin>>n>>p;}
        void disp(){cout<<"The item number is: "<<n<<"\nPrice: "<<p<<'\n';}
};
int main(){
    int n;cout<<"Enter the number of items: ",cin>>n;
    Item *p=new Item[n];
    for(int i=0;i<n;i++)(p+i)->disp();
    return 0;
}