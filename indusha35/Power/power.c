#include<stdio.h>
int power(int,int);
int main()
{
	int b,p,result;
	printf("Enter base and power :");
	scanf("%d%d",&b,&p);
	result=power(b,p);
	printf("power is %d\n",result);
	return 0;
}
int power(int base,int pow)
{
	if(pow!=0)
	return (base*power(base,pow-1));
	else
	return 1;
	
}
