#include<stdio.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
int fd;
int *count=0;
int main()
{
fd=shm_open("/cdacshm",O_RDWR | O_CREAT,S_IRUSR | S_IWUSR);
ftruncate(fd,sizeof(int));
count=(int*)mmap(NULL,sizeof(int),PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
*count +=1;
return 0;

}


