//19 July,2022
// WAP to enter id, name, age and basic salary of n number of employees. Calculate the 
// gross salary of all the employees and display it along with all other details in a tabular 
// form, using pointer to structure.
// [ Gross salary= Basic salary + DA + HRA, 
// DA = 80% of Basic salary HRA=10% of 
// Basic salary ]
#include<stdio.h>
#include<stdlib.h>
struct e{
    int id,a;
    float bs;
    char c[50];
};
int main(){
    int n;
    printf("Enter the number of Employees:\n");
    scanf("%d",&n);
    struct e *s=(struct e*)malloc(sizeof(struct e));
    for(int i=0;i<n;i++){
        printf("Enter id, Name, Age and the Basic salary of employee no.%d\n",i+1);
        scanf("%d",&(s+i)->id);
        gets((s+i)->c);
        gets((s+i)->c);
        scanf("%d%f",&((s+i)->a),&((s+i)->bs));
    }
    printf("Employee\tName\tAge\tBasic Salary\tGross Salary\n");
    for(int i=0;i<n;i++)printf("%d\t\t%s\t%d\t%f\t%f\n",i+1,(s+i)->c,(s+i)->a,(s+i)->bs,(s+i)->bs+(0.9*(s+i)->bs));
    return 0;
}