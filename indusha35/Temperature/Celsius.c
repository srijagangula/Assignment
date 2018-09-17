#include<stdio.h>
int main()
{

float Tc,Tf;
printf("Enter Temperature in Celsius");
scanf("%f",&Tc);
Tf=(Tc*1.8)+32;
printf("Temperature in Fahrenheit = %f\n",Tf);
return 0;
}
