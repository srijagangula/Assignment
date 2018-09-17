#include<stdio.h>
void absolute(int);
int main()
{
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	absolute(num);
return 0;
}
void absolute(int var)
{
	if(var<0)
	{
		var=-1*var;
		printf("absolute number is %d\n",var);
	}
	else
	{
	printf("absolute number is %d\n",var);	
	}
}
