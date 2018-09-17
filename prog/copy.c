//program to copy string
#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[10];
int i;
printf("Enter str1");
scanf("%s",str1);

for(i=0;str1[i]!='\0';++i)
{
str2[i]=str1[i];
}
printf("string S2 %s\n",str2);
return 0;
}
