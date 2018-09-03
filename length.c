//program to fin length of string
#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,len;
printf("Enter string");
scanf("%s",str);

for(i=0;str[i]!='\0';i++)
{
len++;

}printf("%d\n",len);
return 0;
}
