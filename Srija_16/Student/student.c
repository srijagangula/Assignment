#include<stdio.h>
int main()
{
	int rnum,m1,m2,m3,total;
	char name;
	float avg;
	
	printf("Enter rnum,name,marks of student");
	scanf("%d\n%s\t%d\t%d\t%d",&rnum,&name,&m1,&m2,&m3);
	total=m1+m2+m3;	
	printf("Total is%d\n",total);
	avg=total/3;
	printf("average is %f\n",avg);
	if(avg<40)
	{
		printf("Fail\n");
	}
	else if(avg>=70)
	{
		printf("Distinction\n");
	}
	else if(avg<70 && avg>=60)
	{
		printf("First Class\n");
	}
	else if(avg<60 && avg>=50)
	{
		printf("Secound Class\n");
	}
	else
	{
		printf("Third Class\n");
	}
	return 0;

}
