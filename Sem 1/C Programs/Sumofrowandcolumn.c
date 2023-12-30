/*Q5 04.01.22*/
#include <stdio.h>
int main ()
{
   int n,s=0,i,j;
   printf("Enter the order of the matrix:");
   scanf("%d",&n);
   printf("Enter the elements:\n");
   int a[n][n];
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++) {
         scanf("%d",&a[i][j]);
      }
   }
   printf("The matrix is:\n");
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         printf("%d",a[i][j]);
      }printf("\n");
   }
   for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
         s+=a[i][j];
      }
      printf("The Sum of the elements in %d row is:%d\n",i+1,s);
      s= 0;
   }
   s=0;
   for(int j=0;j<n;j++) {
      for(int i=0;i<n;i++){
         s+=a[i][j];
      }
      printf("Sum of the elements in %d column is:%d\n",j+1,s);
      s=0;
   }
   
   return 0;
}