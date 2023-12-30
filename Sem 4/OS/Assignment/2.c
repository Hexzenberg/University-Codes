// Write c program to check process creation is successful or not using fork() system call.
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    int r;
    r=fork();
    if(r<0)printf("Process creation failed\n");
    else if(r==0){
        printf("Child process created\n");
        sleep(2);
        printf("Child process completed\n");
    }else{
        printf("Child process pid:%d\n", r);
        wait();
        printf("Child process exited\n");
    }
    return 0;
}
