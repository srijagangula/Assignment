#include<stdio.h>
void max(int,int);
int main()
{
	int a,b;
	printf("Enter two Number");
	scanf("%d%d",&a,&b);
	max(a,b);
return 0;
}
void max(int x,int y)
{
	if(x>y)
	{
		printf("Max  is %d\n",x);
	}
	else
	{
	printf("Max is %d\n",y);	
	}
}
