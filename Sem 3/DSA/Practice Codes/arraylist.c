#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct{
	int data[max];
	int size;
}arraylist;
void init(arraylist *a){
	a->size=0;
}
int find(arraylist a,int v){
	for(int i=0;i<a.size;i++)
		if(a.data[i]==v){
			return i; 
			break;
		}
	return -1;
}

void display(arraylist a){
	for(int i=0;i<a.size;i++)
		printf("%d\t",a.data[i]);
	printf("\n");
}
int insert(arraylist *a,int p,int v){
	if(a->size==max){
		printf("arraylist is full\n");
		return 1;
	}
	int i;
	for(i=a->size-1;i>=p;i--)
		a->data[i+1]=a->data[i];
	a->data[i+1]=v;
	a->size++;
//	display(*a);	
	return 0;
}
int delete(arraylist *a,int p,int *v){
	if(p>=a->size){
		printf("Cannot be deleted\n");
		return 1;
	}
	*v=a->data[p];
	int i;
	for(i=p+1;i<a->size;i++)
		a->data[i-1]=a->data[i];
	a->size--;
//	display(*a);	
	return 0;
}
int main(){
	int res;
	arraylist a1;
	init(&a1);
	insert(&a1,3,5);//3 is position and 5 is value
	insert(&a1,2,6);
	insert(&a1,7,8);
	insert(&a1,0,4);
	insert(&a1,2,9);
	insert(&a1,3,15);
	delete(&a1,3,&res);
	printf("Del=%d\n",res);
	delete(&a1,0,&res);
	printf("Del=%d\n",res);
	display(a1);
	return 0;
}














