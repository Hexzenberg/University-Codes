//Write c program to implement Round Robin CPU scheduling Algorithm.
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int at,bt,rt,tat,wt,f,ct;
    char c[10];
}rr;
int main(){
    int n,t,q,d=0;
    printf("Enter the number of processes:\n"),scanf("%d",&n);
    printf("Enter time quantum:\n"),scanf("%d",&q);
    rr*p=malloc(sizeof(rr)*n);
    for(int i=0;i<n;i++){
        printf("Enter process name, arrival time and burst time:\n");
        scanf("%s%d%d",p[i].c,&p[i].at,&p[i].bt);
        p[i].rt=p[i].bt,p[i].f=0;
    }
    for(t=0;d<n;){
        for(int i=0;i<n;i++){
            if(p[i].at<=t&&p[i].f==0){
                if(p[i].rt<=q&&p[i].rt>0){
                    d++;t+=p[i].rt;
                    p[i].rt=0;p[i].f=1;p[i].ct=t;
                    p[i].tat=p[i].ct-p[i].at;
                    p[i].wt=p[i].tat-p[i].bt;
                }
                else p[i].rt-=q,t+=q;
            }
        }
    }
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%d\t%d\t%d\t%d\n",p[i].c,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
    }
    return 0;
}
