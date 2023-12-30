#include <stdio.h>
int main()
{
	int n,i,x,j;
	printf("Enter the number of terms of the number:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The entered number by you:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\nEnter the number that is to be searched:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x){
			n--;
			for(j=i;j<n;j++)
				a[j]=a[j+1];
		}
	}
	printf("The original number after omission of the digit:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
