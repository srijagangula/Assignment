#include<stdio.h>
int main()
{
int i,j,rows;
printf("enter nof rows\n");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
}
return 0;

}
