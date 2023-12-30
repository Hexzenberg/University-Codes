//19 July,2022
// WAP to input name, roll number and marks in 5 subjects for n number of students. Write 
// functions to:-
// a. Find total marks and percentage of all n students.
// b. Display details of a student with a given roll number.
// c. Display the details for all the students having percentage in a given range.
// d. Sort the array in ascending order of marks.
#include<stdio.h>
#include<stdlib.h>
struct s{
  char name[30];
  int r,m[5];
};
void get(struct s *x){
  printf("Enter name of the student:\n");
  gets(x->name);
  gets(x->name);
  printf("Enter the roll number of the student:\n");
  scanf("%d",&x->r);
  printf("Enter the marks of the student:\n");
  for(int i=0;i<5;i++)scanf("%d",&x->m[i]);
}
void disp(struct s *x){
  printf("Name of the student is:");
  puts(x->name);
  printf("Roll number :%d\nMarks :\t",x->r);
  for(int i=0;i<5;i++)printf("%d\t",x->m[i]);
  printf("\n");
  int n=0;
  for(int i=0;i<5;i++)n+=x->m[i];
  printf("Total marks: %d percentage of the student: %f\n",n,(float)n/5);
}
int per(struct s *x,int p,int q){
  int t=0;
  for(int i=0;i<5;i++)t+=x->m[i];
  return((t/5>=p&&t/5<=q)?1:0);
}
void sort(struct s*x){
  for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
      if(x->m[i]>x->m[j]){
        int t=x->m[i];
        x->m[i]=x->m[j];
        x->m[j]=t;
      }
    }
  }disp(x);
}
void num(struct s*x,int a){
  (a==x->r)?disp(x):printf("Invalid Roll Number.\n");
}
int main(){
  int n,p,q,a;
  printf("Enter no.of students: ");
  scanf("%d",&n);
  struct s *x=(struct s*)malloc(sizeof(struct s));
  for(int i=0;i<n;i++)get(x+i);
  printf("\nStudent Information\n");
  for(int i=0;i<n;i++)disp(x+i);
  printf("Enter the desired roll number to display the students information:\n");
  scanf("%d",&a);
  num(x,a);
  printf("Enter the range of percentages:\n");
  scanf("%d%d",&p,&q);
  printf("The students information between the percentage range %d and %d:\n",p,q);
  for(int i=0;i<n;i++){if(per(x+i,p,q))disp(x+i);else printf("No students in this range.\n");}
  printf("The student information after sorting the marks:\n");
  for(int i=0;i<n;i++)sort(x+i);
  return 0; 
}