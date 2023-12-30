// Oct 18,2022
// Define a class Item that is used to store and display the information
// regarding the item number and its price. Write a program to store and display the details of
// one items by using both normal object and pointer to object separately. Display appropriate
// message wherever necessary
#include<iostream>
using namespace std;
class Item{
    int n,p;
    public:
        Item(){cout<<"Enter the item number and the price:\n",cin>>n>>p;}
        void disp(){cout<<"The item number is: "<<n<<"\nPrice: "<<p<<'\n';}
};
int main(){
    Item a;a.disp();
    Item*p=&a;p->disp();
    return 0;
}