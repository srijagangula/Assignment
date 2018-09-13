#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char const*argv[])
{
 pid_t id;
printf("befor fork %d\n",getpid());
//id=fork();
if(fork())
{
sleep(8);
printf("child process is %d \t%d\t %d\n",getpid(),getppid(),id);

}
else
{
printf("parent process is %d\t %d\t %d\n",getpid(),getppid(),id);
}
return 0;

}
