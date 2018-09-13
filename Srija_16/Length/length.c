#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[]={'c','d','a','c','\0'};
	char ch2[]="cdac";
	int a = strlen(ch1);
	int b = strlen(ch2);
	printf("a=%d\nb=%d\n",a,b);
	return 0;

}
