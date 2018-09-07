#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
printf("before fork %d\n",getpid());
fork();
printf("after fork %d\n",getpid());
return 0;
}
