#include<stdio.h>
void absolute(int);
int main()
{
	int a;
	printf("Enter Number");
	scanf("%d",&a);
	absolute(a);
return 0;
}
void absolute(int x)
{
	if(x<0)
	{
		x=-1*x;
		printf("absolute number is %d\n",x);
	}
	else
	{
	printf("absolute number is %d\n",x);	
	}
}
