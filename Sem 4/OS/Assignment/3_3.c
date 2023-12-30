#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
    int t=0;
    for(int i=0;i<2;i++){
        int r=fork();
        if(r==0){//Child process
            printf("pid=%d ppid=%d\n",getpid(),getppid());
            if(i==0){
                for(int j=0;j<2;j++){
                    int rec=fork();
                    if(rec>0){//parent process
                        printf("pid=%d ppid=%d\n",getpid(),getppid());
                        break;
                    }
                }
            }else if(i==1){ 
                for(int j=0;j<3;j++){
                    int re=fork(); 
                    if(re==0){
                        printf("pid=%d ppid=%d\n",getpid(),getppid());
                        break;
                    }
                }
            }break;
        }
    }  
}

