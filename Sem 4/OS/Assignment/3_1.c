//One parent three child processe
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    for(int i=0;i<3;i++){
        int r=fork();
        if(r==0){
            printf("pid=%d ppid-%d\n",getpid(),getppid());
            break;
        }
    }
}