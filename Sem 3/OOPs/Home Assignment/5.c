// WAP to print the calendar of that month by accepting month number and name of the 
// first day of the month from user.
#include<stdio.h>
#include<stdlib.h>
char*mo(int m760){
    return(m760==1?"January":m760==2?"February":m760==3?"March":m760==4?"April":m760==5?"May":m760==6?"June":m760==7?"July":m760==8?"August":m760==9?"September":m760==10?"October":m760==11?"November":"December");
}
int d(char s760[10]){
    return(s760[0]=='M'?0:(s760[0]=='T'?(s760[1]=='h'?3:1):(s760[0]=='W'?2:(s760[0]=='F'?4:(s760[0]=='S'?(s760[1]=='u'?6:5):0)))));
}
int n(int m760){
    return((m760==2)?28:(m760==1?31:m760==3?31:m760==5?31:m760==7?31:m760==8?31:m760==10?31:m760==12?31:30));
}
int main(){
    int m760,t760=1;
    char s760[10];
    printf("Enter the month number then the first day of the month:\n");
    scanf("%d%s",&m760,s760);
    printf("The month is:%s\nMon Tue Wed Thu Fri Sat Sun\n",mo(m760));
    int a760=d(s760),b760=n(m760);
    int**c760=malloc(6*sizeof(int *));
    for(int i=0;i<7;i++)c760[i]=calloc(7,sizeof(int));
    for(int i=0;i<6;i++){
        if(i==0)for(int j=a760;j<7;j++)c760[i][j]=(t760<=b760?t760++:0);
        else for(int j=0;j<7;j++)c760[i][j]=(t760<=b760?t760++:0);
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<7;j++){
            if(c760[i][j]==0)printf("    ");
            else{
                printf("%d  ",c760[i][j]);
                if(c760[i][j]/10==0)printf(" ");
            }
        }printf("\n");
    }
    return 0;
}