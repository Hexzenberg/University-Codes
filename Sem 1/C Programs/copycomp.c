/*Q 18.01.22*/
#include<stdio.h>
struct employee{
    char name[10];
    char address[10];
    int age;
    int salary;
};
struct employee e1={"Nikhil","Delhi",19,1000000};
struct employee e2,e3;
void main()
{
    printf("\ne1[name,address,age,salary] is %s %s %d %d",e1.name,e1.address,e1.age,e1.salary);
    printf("\nCopying e1 age to e2 age and then printing it out: ");
    e2.age=e1.age;
    printf("\n\ne2.age is %d",e2.age);
    printf("\nEnter the name for e2: ");
    gets(e2.name);
    if(strcmp(e1.name,e2.name)==0)
        printf("\ne1.name and e2.name are equal");
    else    
        printf("\ne1.name and e2.name are not equal");
}