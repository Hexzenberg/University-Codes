//06/04/23
//Heirarchy of processes
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
        for(int i=0;i<3;i++){
        int r=fork();
        if(r>0){
            printf("pid=%d ppid=%d\n",getpid(),getppid());
            break;
        }
    }
}