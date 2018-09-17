#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
printf("process PID:%d\n",getpid());
printf("parents PID:%d\n",getppid());
}
