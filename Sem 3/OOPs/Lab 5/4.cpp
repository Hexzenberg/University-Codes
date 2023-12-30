// Define a class named as f that contains b data members that represent the
// n and d of a fraction. By defining necessary member functions, write a
// program to add, subtract and multiply b fractions. The add accepts the objects using callby- 
// value technique, subtract using call-by-reference and multiply using call-by-address
// technique.
// Sample input/Output
// For Fraction-1
// Enter the n: 3
// Enter the d: 5
// For Fraction-2
// Enter the n: 4
// Enter the d: 9
// Result of addition = 47/45
// Result of subtraction = 7/45
// Result of multiplication = 4/15
#include<bits/stdc++.h>
using namespace std;
class f{
  int n,d;
  public :
    void set(){cout<<"Enter the numerator and denominator:\n",cin>>n>>d;}
    void disp(){cout<<n<<"/"<<d<<endl;}
    void simp(){
      int g=1;
      for(int i=2;i<=min(n,d);i++)if(n%i==0&&d%i==0)g=i;
      n/=g,d/=g;
    }
    f add(f b){
        f r;
        r.d=d*b.d,r.n=((r.d/d)*n)+((r.d/b.d)*b.n),r.simp(),cout<<"Result of addition: ";
        return r;
    }
    f su(f&b){
        f r;
        r.d=d*b.d,r.n=((r.d/d)*n)-((r.d/b.d)*b.n),r.simp(),cout<<"Result of subtraction: ";
        return r;
    }
    f mu(f*b){
        f r;
        r.d=d*b->d,r.n=n*b->n,r.simp(),cout<<"Result of multiplication: ";
        return r; 
    }
};
int main() {
  f a,b,ad,s,m;
  a.set(),b.set(),ad=a.add(b),ad.disp(),s=a.su(b),s.disp(),m=a.mu(&b),m.disp();
  return 0;
}