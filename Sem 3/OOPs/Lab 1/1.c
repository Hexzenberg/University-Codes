//19 July,2022
//WAP to input name, roll number and marks in 5 subjects for a student, and display it.
#include<stdio.h>
struct c{
    int r,m[5];
    char n[100];
};
int main(){
    struct c x;
    printf("Enter the name and the roll number of the student:\n");
    gets(x.n);
    scanf("%d",&x.r);
    printf("Enter the marks:");
    for(int i=0;i<5;i++)scanf("%d",&x.m[i]);
    printf("The name of the student is: %s\nThe roll number of the student is: %d\nTheir marks in 5 subjects: ",x.n,x.r);
    for(int i=0;i<5;i++)printf("%d\t",x.m[i]);
    return 0;
}