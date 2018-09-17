#include<stdio.h>
void main()
{
  char str[20],i;
printf("the   string is ");
scanf("%s",str);
for(i=0;str[i]!='\0';++i);

printf("the lenght of string is %d",i);


}
