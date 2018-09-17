#include<stdio.h>
int table(int,int);
int main()
{
	int x,y;
	table(x,y);
	return 0;
}
int table(int i,int j)
{
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
		printf("\n");
	}
}
