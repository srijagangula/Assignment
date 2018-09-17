#include<stdio.h>
#include<pthread.h>

void *hellothread(void *arg)
{
printf("hello thread\n");
}
int main()
{
pthread_t tid;

printf("befor create");

pthread_create(&tid,NULL,hellothread,NULL);

printf("after create");

return 0;
}
