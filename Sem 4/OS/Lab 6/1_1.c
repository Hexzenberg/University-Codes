//SJF preemption case
#include<stdio.h>
#include<stdlib.h>
struct sjf{
    int at,bt,ct,tat,wt,rt,rbt;
    char c[10];
}typedef sjf;
int main(){
    int n,c=0,d=0;
    printf("Enter the number of processes:\n");
    scanf("%d",&n);
    sjf*p=malloc(sizeof(sjf)*n),*r=NULL;
    printf("Enter the Name and arrival and burst time:\n");
    for(int i=0;i<n;i++){
        scanf("%s%d%d",p[i].c,&p[i].at,&p[i].bt);
    }
    for(int i=0;i<n;i++)p[i].rbt=p[i].bt;
    for(int i=0;i<n;i++){
        sjf t=p[i];int j=i-1;
        for(j=i-1;j>=0&&p[i].at<t.at;j++)p[j+1]=p[j--];p[j+1]=t;
    }
    while(d!=n){
        int nt=-1;
        for(int i=0;i<n;i++)if(p[i].at<=c&&p[i].rbt>0)if(nt==-1||p[i].rbt<p[nt].rbt)nt=i;
        if(nt==-1){c++;continue;}
        if(r!=NULL&&r->rbt<p[nt].rbt){r->rbt-=(c-r->ct);c=r->ct;}
        if(r!=NULL&&r->rbt==0){
            r->ct=c;r->tat=r->ct-r->at;
            r->wt=r->tat-r->bt;d++;
        }
        if(r==NULL||r->rbt==0){r=&p[nt];r->rt=c-r->at;}
        r->rbt--;c++;
    }
    printf("Process\tAT\tBT\tCT\tTAT\tWT\tRT:\n");
    for(int i=0; i<n; i++){
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i].c,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
    }
    return 0;
}
