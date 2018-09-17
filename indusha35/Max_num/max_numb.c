#include<stdio.h>
void max(int,int);
int main()
{
	int num1,num2;
	printf("Enter two Number");
	scanf("%d%d",&num1,&num2);
	max(num1,num2);
return 0;
}
void max(int var1,int var2)
{
	if(var1>var2)
	{
		printf("Max  is %d\n",var1);
	}
	else
	{
	printf("Max is %d\n",var2);	
	}
}
