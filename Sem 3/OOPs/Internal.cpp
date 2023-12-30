#include<iostream>
using namespace std;
int k=0;
class set{
    int a[5];
    public:
        set(){}
        set(int j){for(int i=0;i<5;i++)cin>>a[i];}
        set operator+(set b){
            set c;
            for(int i=0;i<5;i++)c.a[k++]=a[i];
            for(int i=0;i<5;i++)c.a[k++]=b.a[i];
            for(int i=0;i<k-1;i++)for(int j=0;j<k-i-1;j++)if(a[j]>a[j+1]){int t=c.a[j];c.a[j]=c.a[j+1],c.a[j+1]=t;}
            for(int i=0;i<k;i++)if(c.a[i]==c.a[i+1])for(int j=i+2;j<k;j++)c.a[j-1]=c.a[j],k--;
            return c;
        }
        void disp(){for(int i=0;i<k;i++)cout<<a[i]<<" ";}
};
int main(){
    set s1(1),s2(2),s3;
    s3=s1+s2;
    s3.disp();
    return 0;
}