#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>

#include<arpa/inet.h>
#include<linux/in.h>

struct sockaddr_in saddr;
struct sockaddr_in caddr;
unsigned char buff[1024];
int sfd,cfd,len;

int main()
{
	sfd= socket(AF_INET, SOCK_STREAM, 0);

	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	saddr.sin_port = htons(5678);

	bind(sfd, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in));
	listen(sfd,10);
	len=sizeof(struct sockaddr_in);
	cfd=accept(sfd, (struct sockaddr *)&caddr,&len);

	write(cfd,"Hello s\n",8);
	read(cfd,buff,1024);
	printf("Client Sent:%s\n",buff);
	
	close(sfd);
	close(cfd);
	return 0;
}

