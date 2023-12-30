// Count frequency of each character in a string.
#include<stdio.h>
#include<stdlib.h>
void d(char*a760,int n760){
    int c;
    for(int i=0;i<n760;i++){
     	c=1;
    	if(a760[i]){
 		  for(int j=i+1;j<n760;j++)if(a760[i]==a760[j]){c++;a760[j]='\0';}
          printf("The frequency of character %c: %d\n",a760[i],c);
       }
 	}
}
int main(){
    int n760;
    printf("Enter the size of the array:\n");
    scanf("%d",&n760);
    char*a760=malloc(n760*sizeof(char));
    printf("Enter the elements of the array:\n");
    gets(a760);
    gets(a760);
    d(a760,n760);
    return 0;
}