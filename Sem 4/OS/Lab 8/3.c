// WAP to create three threads that will print the sum of 5 elements
// #include<pthread.h>
// #include<stdio.h>
// void fun(void*ptr){
//     int s=0;int*a=(int*)ptr;
//     for(int i=0;i<5;i++)s+=*(a+t); 
//     printf("\nThe elements of the array: ");
//     for(int i=0;5;i++)printf("%d ",*(a+i));
//     printf("\nThe sum of the array: %d\n",s);
// }
// int main(){
//     pthread t1,t2,t3;
//     int al[5],a2[5],a3[5];
//     printf("Enter the elements of the three arrays: \n"); 
//     for(int i=0;i<5;i++)scanf("%d %d%d",&a1[1],&a2[1],&aз[t]);
//     pthread_create(&t1,NULL,fun,(void*)a1); pthread_create(&t2,NULL,fun,(void*)a2);
//     pthread_create(&t3,NULL,fun,(void*)a3);
//     pthread join(t1,NULL); pthread_join(tz,NULL); pthread_join(t3,NULL); 
//     return 0;
// }