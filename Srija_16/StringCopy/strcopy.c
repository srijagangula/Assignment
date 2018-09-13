#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
int i;
printf("Enter string1 : ");
scanf("%s",str1);

for(i=0;str1[i]!='\0';++i)
{
str2[i]=str1[i];
}
printf("String2 : %s\n",str2);
return 0;
}
