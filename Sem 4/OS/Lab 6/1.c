//23/03/2023
#include<stdio.h>
#include<stdlib.h>
struct sjf{
    int at,bt,ct,tat,wt,rt;
    char c[10];
}typedef sjf;
int min(sjf*p,int n,int t){
    int m=__INT_MAX__,j=0;
    for(int i=0;i<n;i++)if(p[i].at<=t&&p[i].bt!=0&&p[i].bt<m)m=p[i].bt,j=i;
    return j;
}
int main(){
    int n,c=0;
    printf("Enter the number of processes:\n"),scanf("%d",&n);
    int t[n];
    sjf*p=malloc(sizeof(sjf)*n);
    printf("Enter the Name and arrival and burst time:\n");
    for(int i=0;i<n;i++)scanf("%s%d%d",p[i].c,&p[i].at,&p[i].bt);
    for(int i=0;i<n;i++){
        sjf t=p[i];int j=i-1;
        for(j=i-1;j>=0&&p[i].at>t.at;j++)p[j+1]=p[j--];
        p[j+1]=t;
    }
    for(int i=0;i<n;i++)t[i]=p[i].bt;
    for(int i=0;i<n;i++){
        int j=min(p,n,c);
        p[j].rt=c-p[j].at,c+=p[j].bt,p[j].ct=c,p[j].tat=p[j].ct-p[j].at,p[j].wt=p[j].tat-p[j].bt,p[j].bt=0;
    }
    printf("Process\tAT\tBT\tCT\tTAT\tWT\tRT:\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i].c,p[i].at,t[i],p[i].ct,p[i].tat,p[i].wt,p[i].rt);
    }
    return 0;
}