#include<stdio.h>
#include<pthread.h>
int count=0;

void *incThread(void *arg)
{
while(1)
{
count++;
printf("inc:%d\n",count);
}
}
void *decThread(void *arg)
{
while(1)
{
count--;
printf("dec:%d\n",count);

}

}
int main()
{
pthread_t incId,decId;
pthread_create(&incId,NULL,incThread,NULL);
pthread_create(&decId,NULL,decThread,NULL);
pthread_join(incId,NULL);
pthread_join(decId,NULL);
return 0;
}



