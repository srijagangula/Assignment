#include<stdio.h>
#include<string.h>
int main()
{
FILE *fd;
char w[30],wrd[30];
int len,k,i,j=0,count=0;
fd=fopen("words","r");
printf("enter the word to search\n");
scanf("%s",wrd);
len=strlen(wrd);
	for(i=1;i<99171;i++)
	{
	 while((w[j]=fgetc(fd))!='\n')
	{
		j++;
	}
	for(k=0;k<j;k++)
	{
	if(w[k]==wrd[k])
	count++;
	}
	if(count==len && count==k)
	{
	printf("match found at line :%d\n",i);
	return 1;
	}
	j=0;
	count=0;
}
printf("match not found\n");
}
