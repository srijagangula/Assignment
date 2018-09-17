#include<stdio.h>
int main()
{
const float pi=3.1414;
float rad,area,perimeter;
printf("Enter value of r\n");
scanf("%f",&rad);
area=pi*rad*rad;
perimeter=2*pi*rad;
printf("Area = %f\t Perimeter = %f\n",area,perimeter);
return 0;
}
