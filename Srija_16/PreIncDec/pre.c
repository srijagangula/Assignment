#include<stdio.h>
int main()
{
	int a=10;
	++a;
	printf("Value of a:%d\n",a);
	--a;
	printf("Value of a:%d\n",a);
	printf("Value of a:%d\n",++a);
	printf("Value of a:%d\n",--a);	
	return 0;

}
int ret1()
{
 return 100000;
}
float ret2()
{
return 25.8f;
}
char* ret3()
{
return '2';
}

}
