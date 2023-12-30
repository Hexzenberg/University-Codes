//Child creation
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    printf("%d",getpid());
    fork();
    printf("%d",getpid());
    return 0;
}