#include<stdio.h>
int main()
{
	int a,b,L;
	printf("Enter Valu for a and b");
	scanf("%d\t%d",&a,&b);
	L=a>b?a:b;
	printf("Largest Number is: %d\n",L);
	return 0;
}
