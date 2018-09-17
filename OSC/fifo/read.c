#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
 int fdr;
unsigned char buff[1024];
fdr=open("Dacfifo",O_RDONLY);
read(fdr,buff,1024);
printf("read: %s\n",buff);
close(fdr);
return 0;
}
