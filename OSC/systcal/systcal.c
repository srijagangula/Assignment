#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc,char const*argv[])
{
int fd = open("dac.txt",O_WRONLY|O_CREAT);
int res=write(fd,"hello ");
if(-1==res)
{
perror("error");
//exit();
}
else
{
printf("wrote %d",res);
}
//close(fd);
}


