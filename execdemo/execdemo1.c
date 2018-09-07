#include<stdio.h>
#include<unistd.h>
int main()
{
//pid_t id;
printf("before execl\n"); //%d",getpid());
//if(id==0)
//{
execl("/bin/ls","/bin/ls","-a","-l",NULL);
printf("after execl");

//id=fork();


return 0;

}
