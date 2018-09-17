#include<stdio.h>
#include<string.h>
int main()
{
char str[50],revstr[50];
int len,i,j;
printf("Enter string to reverse");
scanf("%s",str);
j=0;
len=strlen(str);

for(i=len-1;i>=0;i--)
{
revstr[j++]=str[i];
}
printf("%s\n",revstr);
return 0;
}
