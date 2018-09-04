#include<stdio.h>
int mul(int ,int);
int div(int ,int);
int main()
{
int a=20,b=10;
//printf("Enter two integers:"a,b);

int z=mul(a,b);
printf("mul is %d\n",z);
int y=div(a,b);
printf("div is %d\n",y);
return 0;
}
