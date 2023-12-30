//August 4,2022
// Write a program to store employee’s information as name, gender, department, basic pay, 
// gross pay using one array of structure where gross pay is not the user input. 
// Calculate the gross pay using the following formula & assign the value in the 
// individual employee’s gross pay entry.
// Gross Pay = basic pay + HR + DA
// Where HR=25% of basic
// DA= 75% of basic
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    float bs;
    char c[50],g[6],d[20];
}e;
int main(){
    e*s=malloc(sizeof(e));
    printf("Enter Name, gender, department and the Basic salary:\n");
    gets(s->c),gets(s->g),gets(s->d),scanf("%f",&(s->bs));
    printf("Name: %s\nGender: %s\nDepartment: %s\nBasic pay: %f\nGross pay: %f",s->c,s->g,s->d,s->bs,2*s->bs);
    return 0;
}