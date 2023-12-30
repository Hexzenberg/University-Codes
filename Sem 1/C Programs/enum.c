/*Q 19.01.22*/
#include<stdio.h>
enum days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{
    enum days today;
    printf("%d\n",Wednesday);
    today=Sunday;
    printf("%d",today+6);
}

