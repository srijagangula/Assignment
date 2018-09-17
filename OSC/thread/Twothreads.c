#include<stdio.h>
#include<pthread.h>

void *hellothread(void *arg)
{
printf("hello thread\n");
}
void *byethread(void *arg)
{
printf("Bye thread\n");
}
int main()
{
pthread_t tid1,tid2;

pthread_create(&tid1,NULL,hellothread,NULL);
pthread_create(&tid2,NULL,byethread,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);


return 0;
}
