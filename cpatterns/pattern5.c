#include<stdio.h>
int main()
{
int rows,i,j,num=1,space;
printf("enter nof rows\n");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for(space=1;space<=rows-i;++space)
{
	printf("  ");
}

	for(j=1;j<=i;j++)
	{

	printf("%d\t",num);
	num++;
	}
	printf("\n");
}
return 0;
}
