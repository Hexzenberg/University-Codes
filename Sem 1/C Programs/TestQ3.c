#include <stdio.h>
struct niStudent{
   char name[20];
   char sex;
   int age;
   char dob[10];
}; 
void ni_disp(struct niStudent *nik)
{
   printf("Sl No.\t\tName\t\tAge\t\tDOB (DD/MM/YY)\n");
   for(int i=0;i<10;i++){
      if(nik->sex=='F'||nik->sex=='f'){
         printf("%d\t\t%s\t\t%d\t\t%s\n",i+1,nik->name,nik->age,nik->dob);
      }
      nik++;    
   }
} 
int main()
{
   struct niStudent ni[10];
   for(int i=0;i<10;i++){
      printf("SL no. %d: \n",i+1);
      printf("Enter Student Name: \n");
      scanf("%s",ni[i].name);
      printf("Enter Gender: \n");
      scanf(" %c",&ni[i].sex);
      printf("Enter Student Age: \n");
      scanf("%d",&ni[i].age);
      printf("Enter Student Date of Birth: \n");
      scanf("%s",ni[i].dob);    
   }
   ni_disp(ni);
   return 0;
}