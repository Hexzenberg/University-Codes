// WAP to Count the total number of note(s) in a given amount.
#include<stdio.h>
#include<stdlib.h>
void m(int n760){
        if(n760/2000)printf("The amount has %d Rs.2000 note(s).\n",n760/2000);
        n760%=2000;
        if(n760/500)printf("The amount has %d Rs.500 note(s).\n",n760/500);
        n760%=500;
        if(n760/200)printf("The amount has %d Rs.200 note(s).\n",n760/200);
        n760%=200;
        if(n760/100)printf("The amount has %d Rs.100 note(s).\n", n760/100);
        n760%=100;
        if(n760/50)printf("The amount has %d Rs.50 note(s).\n",n760/50);
        n760%=50;
        if(n760/20)printf("The amount has %d Rs.20 note(s).\n",n760/20);
        n760%=20;
        if(n760/10)printf("The amount has %d Rs.10 note(s).\n",n760/10);
        n760%=10;
        if(n760/5)printf("The amount has %d Rs.5 note(s).\n",n760/5);
        n760%=5;
        if(n760/2)printf("The amount has %d Rs.2 coin(s).\n",n760/2);
        n760%=2;
        if(n760/1)printf("The amount has %d Rs.1 coin(s).\n",n760/1);
}
int main(){
    int n760;
    printf("Enter the amount:\n");
    scanf("%d",&n760);
    m(n760);
    return 0;
}