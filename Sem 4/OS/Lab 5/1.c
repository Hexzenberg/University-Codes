//02/03/23
//WAP to implement First come first serve
#include<stdio.h>
#include<stdlib.h>
typedef struct firstcomefirstserve{
    char pn[10];
    int at,bt,ct,wt,tat,rt;
}f;
void swap(f*a,f*b){f t;t=*a,*a=*b,*b=t;}
int sum(f*a,int n,char t){
    int s=0,i;
    if(t=='t')for(i=0;i<n;i++)s+=(a+i)->tat;
    else if(t=='w')for(i=0;i<n;i++)s+=(a+i)->wt;
    return s;
}
int main(){
    int n,b=0,i,j;
    printf("Enter no. of process:\n");
    scanf("%d",&n);f*a=malloc(n*sizeof(f));
    printf("Enter the process name, arrival time and burst time:\n");
    for(i=0;i<n;i++)scanf("%s%d%d",(a+i)->pn,&(a+i)->at,&(a+i)->bt);
    for(i=0;i<n;i++)for(j=i-1;j>=0;j--)if(a[i].at<a[j].bt)swap((a+i),(a+j));
    for(i=0;i<n;i++){
        (a+i)->rt=b-(a+i)->at;
        b+=(a+i)->bt;
        (a+i)->ct=b;
        (a+i)->tat=b-(a+i)->at;
        (a+i)->wt=(a+i)->tat-(a+i)->bt;
    }
    printf("Process AT\tBT\tCT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++)printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",(a+i)->pn,(a+i)->at,(a+i)->bt,(a+i)->ct,(a+i)->tat,(a+i)->wt,(a+i)->rt);
    printf("Average WT:%d\nAverage TAT:%f",sum(a,n,'w')/n,(float)sum(a,n,'t')/n);
    return 0;
}