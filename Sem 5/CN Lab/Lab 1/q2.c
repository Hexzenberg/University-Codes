// Write a C program to assign values to each member of the following structure.Pass the populated structure to a function Using call -
// by - value and another function using call - by - address and print the value of each member of the structure.
// struct student_info
// {
//     int roll_no;
//     char name[50];
//     float CGPA;
//     struct dob age;
// };
#include <stdio.h>
#include <string.h>
struct dob
{
    int date, month, year;
    int cur_age;
};
typedef struct student_info
{
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
} st;
void display(st a)
{
    printf("Name: %s \nRoll No: %d\nCGPA: %f\nDOB : %d-%d-%d\nAGE: %d", a.name,
           a.roll_no, a.CGPA, a.age.date, a.age.month, a.age.year, 2023 - a.age.year);
}
void displayptr(st *p)
{
    st a = *p;
    printf("\nName: %s\nRoll No: %d\nCGPA: %f\nDOB: %d-%d-%d\nAGE :%d", a.name,
           a.roll_no, a.CGPA, a.age.date, a.age.month, a.age.year, 2023 - a.age.year);
}
int main()
{
    st a;
    strcpy(a.name, "Nikhil");
    a.roll_no = 2105760;
    a.CGPA = 9.0;
    a.age.date = 13;
    a.age.month = 8;
    a.age.year = 2002;
    display(a);
    displayptr(&a);
    return 0;
}