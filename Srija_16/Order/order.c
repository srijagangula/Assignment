#include<stdio.h>
int main()
{
int MAXROW,MAXCOL;
int matrix[MAXROW][MAXCOL];
int i,j,r,c;
int *p,*q;
p=&r;
q=&c;
printf("enter the number of rows\n");
scanf("%d",p);
printf("enter the number of columns\n");
scanf("%d",q);
printf("Enter the values of matrix %d*%d\n",r,c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	scanf("%d",&matrix[i][j]);
	}
}
printf("The matrix is :\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",matrix[i][j]);
	}
	printf("\n");
}
printf("\n");
printf("The matrix order is :%d*%d\n",p*q);
return 0;
}
