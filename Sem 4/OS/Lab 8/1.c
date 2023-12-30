// Create a thread to print a message hello
// #include<pthread.h>
// #include<stdio.h>
// void*fun(){printf("Hello\n");}
// int main(){
//     pthread_t t1,t2;
//     pthread_create(&t1,NULL,fun,NULL);pthread_create(&t2,NULL,fun,NULL);
//     pthread_join(t1,NULL);pthread_join(t2,NULL);
//     return 0;
// }