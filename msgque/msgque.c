#include<stdio.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>
struct mq_attr cdacmq_attr;
mqd_ cdacmqd;
int main(int args, char const *argv[])
{
	cdacmq_attr.mq_flags = 0;
	cdacmq_attr.mq_maxmsg= 4;
	cdacmq_attr.mq_msgsize= 128;
	cdacmq_attr.mq_curmsgs= 0;
cdacmqd= mq_open("/cdacmq",OWRONLY,S_IRUSR | S_IWUSR, &cdacmq_attr);
printf("message queue created...");
mq_send(cdacmqd, "hello\n",6, 0);
mq_close(cdacmqd);
return o;
}
	
	
