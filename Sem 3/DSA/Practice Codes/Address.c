//Compare the stored values of int and float.
#include<stdio.h>
#include<stdlib.h>
int main(){
    float b=1;
    int a=1;
    char *c=(char*)&a,*d=(char*)&b;
    for(int i=0;i<4;i++){
        printf("%d  %f\n",*c++,*d++);
    }
    return 0;
}