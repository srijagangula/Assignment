#include<stdio.h>
int main()
{
	int Mno,surcharge=10;
	char Cname;
	float Prevread,Presread,Units,amt;
	
	printf("Enter Meter Num,Customer Name,Previous Read and present read\n");
	scanf("%d%s%f%f",&Mno,&Cname,&Prevread,&Presread);
	Units=Presread-Prevread;
	printf("Number of Units used is : %f\n",Units);
	
	if(Units<=100)
	{
		amt=(Units*3)+surcharge;
		printf("Bill amount id %f\n",amt);
	}
	else if(Units<=200 && Units>100)
	{
		amt=(Units*3.5)+surcharge;
		printf("Bill amount id %f\n",amt);
	}
	else if(Units<=400 && Units>200)
	{
		amt=(Units*4)+surcharge;
		printf("Bill amount id %f\n",amt);
	}
	else if(Units<=700 && Units>400)
	{
		amt=(Units*4.5)+surcharge;
		printf("Bill amount id %f\n",amt);
	}
	else
	{
		amt=(Units*5)+surcharge;
		printf("Bill amount id %f\n",amt);
	}
	return 0;

}
