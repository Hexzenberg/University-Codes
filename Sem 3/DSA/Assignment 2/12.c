// Write a program that will create an ascending element array from the given unsorted array by 
// fulfilling the following criteria. The values present in the resultant array may be different from
// the original array but the digits present in the each element of the
// original array must be present in the same position of the resultant array.
// Your target should be to minimize the maximum value present in the resultant array. 
// Ex: Original array: 2 9 6 3 9 8 17 3 4 6 13 5
// Resultant array: 2, 9, 16, 23, 29, 38, 71, 73, 74, 76, 103, 105.
#include<stdio.h>
#include<math.h>
#define max 100
struct al{
    int n,a[max];
}typedef al;
void set(al *p){
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->n;i++)scanf("%d",&(p->a[i]));
}
void disp(al p){
    for(int i=0;i<p.n;i++)printf("%d ",p.a[i]);
    printf("\n");
}
int min(al p){
    int min=p.a[0];
    for(int i=1;i<p.n;i++)if(p.a[i]<min)min=p.a[i];
    return min;
}
int d(int t){
    int p=1;
    while(t/=10)p++;
    return p;
}
void o(al *p){
    for(int i=1;i<p->n;i++){
        if(p->a[i]<p->a[i-1]){
            al k;
            k.n=0;
            int t=p->a[i];
            while(t<p->a[i-1])t+=pow(10,d(p->a[i]));
            k.a[k.n++]=t;
            if(d(p->a[i])>=2){
                int b=(p->a[i]%10)+((p->a[i]/10)*100);
                if(b>p->a[i-1])k.a[k.n++]=b;
            }
            if(d(p->a[i])==2){
                int b=(p->a[i]%10)*10+(p->a[i]/10);
                if(b>p->a[i-1])k.a[k.n++]=b;
            }
            p->a[i]=min(k);
        }
    }
}
int main(){
    al p;
    printf("Enter the size of array:\n");
    scanf("%d",&p.n);
    set(&p);
    o(&p);
    printf("The array in required ascending order:\n");
    disp(p);
    return 0;
}

