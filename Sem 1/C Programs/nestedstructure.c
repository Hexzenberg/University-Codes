/*Q Nested Structure jan 18,22*/
#include<stdio.h>
struct address
{
    char name[15];
    char city[30];
    int pin;
};
struct emp
{
    struct address a;
    char phone[10];
};
int main()
{
    struct emp e={"Nikhil","Delhi",46,"114426535"};
    printf("name:%s\ncity:%s\nphone:%s\npin:%d\n",e.a.name,e.a.city,e.phone,e.a.pin);
}