#include<stdio.h>
#include<string.h>
int ret1();
float ret2();
char* ret3();
char ret4();
int main()
{
int n;
float f;
char str[10];
n=ret1();
printf("returned value=%d\n",n);
f=ret2();
printf("returned value=%f\n",f);
printf("returned value=%s\n",ret3());
printf("returned value=%c\n",ret4());
return 0;

}
int ret1()
{
 return 100000;
}
float ret2()
{
return 25.8f;
}
char* ret3()
{
return "hyd";
}
char ret4()
{
return '2';
}

