#define MAX_MSG_SIZE 
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>

struct mq_attr cdacmq_attr;
mqd_t cdacmqd;
unsigned char buff[128];
//unsigned char buff[MAX_MSG_SIZE];
int msgprio=0;
int main(int argc,char const*argv[])
{
cdacmq_attr.mq_flags=0;
cdacmq_attr.mq_maxmsg=4;
cdacmq_attr.mq_msgsize=128;
cdacmq_attr.mq_curmsgs=0;

cdacmqd=mq_open("/cdacmq",O_RDONLY | O_CREAT,S_IRUSR | S_IWUSR,&cdacmq_attr);

mq_receive(cdacmqd,buff,128,&msgprio);
printf("Message received: %s\n ",buff);

mq_close(cdacmqd);
return 0;
}
   
