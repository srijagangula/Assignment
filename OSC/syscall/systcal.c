#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char buff[20] = {'\0'};
	//int res = write;
	int fd1 = open("cdac.txt",O_RDWR | O_CREAT);
	
		/*if(fd1==-1)
		{
		printf("error in write");
		}
		else
		{
		*/	
		write(fd1,"hello",5);
		//close(fd1);
		//printf("%d",res);

		//}
	
	//int fd2 = open("cdac.txt",O_RDONLY | O_CREAT);
		read(fd1,buff,20);
		printf("read:%s",buff);
		close(fd1);
return 0;
}

