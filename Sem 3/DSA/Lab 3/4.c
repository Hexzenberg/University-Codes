//August 4,2022
// Let one student structure is having following data members.
// a.Roll number (int)
// b.Name (string)
// c.Marks of 5 subjects (array of int)
// d.Percentage of mark (float)
// e.Grade (Char)
// WAP to do the following work (use function)
// i.Take students information (User will give the input for members like roll number,
// name & marks of 5 subjects) 
// ii.Find the percentage of mark and grade from the percentage for each student and 
// store the value in appropriate student’s data member’s entry.
// iii.Sort the student
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char n[30];
    int r,m[5];
}s;
void get(s *x){
    printf("Enter Name of the student:\n"),gets(x->n),gets(x->n);
    printf("Enter the roll number:\n"),scanf("%d",&x->r),printf("Enter the marks of the student:\n");
    for(int i=0;i<5;i++)scanf("%d",&x->m[i]);
}
void sort(s*x){
    for(int i=0;i<4;i++)for(int j=i+1;j<5;j++)if(x->m[i]>x->m[j]){int t=x->m[i];x->m[i]=x->m[j];x->m[j]=t;}
    printf("The Name of the student is:"),puts(x->n),printf("Roll Number: %d\nMarks: ",x->r);
    int n=0;
    for(int i=0;i<5;i++)printf("%d ",x->m[i]),n+=x->m[i];
    printf("\n");
    printf("Total marks: %d out of 500 and percentage of the student: %f\nTheir Grade is: ",n,(float)n/5);
    printf((((float)n/5)>90)?"O\n":(((float)n/5)>80)?"E\n":(((float)n/5)>70)?"A\n":(((float)n/5)>60)?"B\n":(((float)n/5)>50)?"C\n":(((float)n/5)>40)?"D\n":"F\n");
}
int main(){
    int n;
    printf("Enter no.of students: "),scanf("%d",&n);
    s*x=malloc(sizeof(s));
    for(int i=0;i<n;i++)get(x+i);
    printf("Student Information:\n");
    for(int i=0;i<n;i++)sort(x+i);
    return 0;
}