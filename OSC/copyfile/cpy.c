#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<string.h>
int main()
{
int fd,fdr,fdw;
unsigned char buffer[1024];
fd=open("originalfile.txt",O_RDONLY,S_IRWXU);
	if(-1==fd)
	{
	perror("error:");
	}
	else
	{
		fdr=read(fd,buffer,1024);
		if(-1==fdr)
		{
		perror("error");
		}
		else
		{
			fdw=open("duplicate.txt",O_WRONLY|O_CREAT,S_IRWXU|S_IRGRP| S_IROTH);
			if(-1==fdw)
			{
			perror("error in write:");
			}
			else
			{
			write(fdw,buffer,strlen(buffer));
			}
		}
	}

}


