#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter Values for a and b\n");
	scanf("%d%d",&a,&b);
	printf("Value of a = %d\nValue of b = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swapping\nValue of a = %d\nValue of b = %d\n",a,b);
	return 0;
}
