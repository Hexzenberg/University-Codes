/* 24.11.21 Q3- WAP to print all the prime nubers from 1 to 300.*/
#include<stdio.h>
int main()
{
    int num,count,i,prime;
    printf("Prime Numbers from 1 To 300 are\n");
    for(num=1;num<=300;num++){
        if(num==1){
            printf("Number 1 is neither prime nor composite\n");
            continue;
        }
        count=num/2;
        prime=1;
        for(i=2;i<=count;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\t",num);
        }
    }
    return 0;
}
