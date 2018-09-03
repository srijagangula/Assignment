//power 
#include<stdio.h>
int mypower(int,int);
int main()
{
int b,p,result;
printf("enter base and power");
scanf("%d%d",&b,&p);
result=mypower(b,p);
printf("power is %d",result);
return 0;
}


int mypower(int base,int powr)
{

if(powr!= 0)
return (base*mypower(base,powr-1));
else
return 1;
}
