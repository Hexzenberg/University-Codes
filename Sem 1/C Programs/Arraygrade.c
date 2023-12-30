/*Q1 14.12.21*/
#include <stdio.h>
int main ()
{
int i,sum,avg,count=0,fail=0,marks[20];
printf("Enter the marks of the 20 students:");
for(i=0;i<20;i++){
    scanf("%d",&marks[i]);
}
for(i=0;i<20;i++){
    sum=sum+marks[i];
    if(marks[i]>89){
        count++;
    } else if(marks[i]<40)
    fail++;
}
avg=sum/20;
printf("\nAverage marks=%d",avg);
printf("\nNumber of students secured O grade=%d",count);
printf("\nNumber of students who failed=%d",fail);
return 0;
}