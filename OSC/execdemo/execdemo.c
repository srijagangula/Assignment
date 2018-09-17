#include<stdio.h>
#include <unistd.h>
int main()
{
pid_t id;
printf("before fork %d\n",getpid());
//id=fork();
//if(id==0)
if(fork())
{
printf("child proces is %d\n",getpid());
execl("/bin/ls","/bin/ls","-a","-l",NULL);
printf("after exec");
}
else
{
printf("parent\n");

}
}

