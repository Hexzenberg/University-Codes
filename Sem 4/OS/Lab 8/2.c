// Print your name and roll
// #include <pthread.h>
// #include <stdio.h>
// void*fun(void*ptr){
//     char*msg;
//     msg=(char*)ptr;printf("%s\n",msg);
// }
// int main(){
//     pthread_t t1,t2;char*m1="Nikhil Kumar Chaudhary",*m2="2105760";
//     pthread_create(&t1,NULL,fun,(void*)m1);pthread_create(&t2,NULL,fun,(void*)m2);
//     pthread_join(t1,NULL);pthread_join(t2,NULL);
//     return 0;
// }