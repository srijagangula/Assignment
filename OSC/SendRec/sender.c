#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<mqueue.h>
#include<unistd.h>


struct mq_attr cdacmq_attr;
mqd_t cdacmqd;

int main(int argc,char const*argv[])
{
cdacmq_attr.mq_flags=0;
cdacmq_attr.mq_maxmsg=4;
cdacmq_attr.mq_msgsize=128;
cdacmq_attr.mq_curmsgs=0;

cdacmqd=mq_open("/cdacmq",O_WRONLY | O_CREAT,S_IRUSR | S_IWUSR,&cdacmq_attr);
printf("Message Queue Started..\n");
mq_send(cdacmqd,"Hello\n",6,0);
printf("Message Sent..\n");

mq_close(cdacmqd);
return 0;
}
   
