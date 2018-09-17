#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
 int fdw;
fdw=open("Dacfifo",O_WRONLY);
write(fdw,"hello\n",6);
//prinf("read: %s\n",buff);
close(fdw);
return 0;
}
