#include<stdio.h>
int main()
{
const float pi=3.1414;
float r,area,perimeter;
printf("Enter value of r\n");
scanf("%f",&r);
area=pi*r*r;
perimeter=2*pi*r;
printf("Area = %f\t Perimeter = %f\n",area,perimeter);
return 0;
}
