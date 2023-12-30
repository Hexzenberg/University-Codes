/*Q2- WAP to print KIIT Student if you are in class 1 to 12 else print KIIT UNIVESITY student_t_distribution*/
#include <stdio.h>

int main()
{
  int class;
  printf("Enter the class:");
  scanf("%d",&class);
  if(class<12)printf("KIIT");
  printf("KIIT UNIVERSITY");
  return 0;
}
