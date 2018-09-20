#include<iostream>
using namespace std;


int main()
{
	int a[10]={58,24,13,15,63,9,8,81,1,78},i,b[5],c[5];
for(i=0;i<10;i++)
{
	cout<<a[i]<<endl;
}
	cout<<"first half is"<<endl;
for(i=0;i<5;i++)
{
	b[i]=a[i];
	cout<<b[i]<<endl;
}
	cout<<"second half is"<<endl;
for(i=5;i<10;i++)
{
	c[i-5]=a[i];
	cout<<c[i-5]<<endl;
}
for(i=0;i<5;i++)
{
	if(a[i]=c[i])
	cout<<a[i<<c[i]]<<endl;
}
	cout<<"elements of array are same from back"<<endl;
	
for(i=0;i<5;i++)
{
	if(a[i]!=c[i])
	cout<<a[i<<c[i]]<<endl;
}
	cout<<"elements of array are not same from back"<<endl;
return 0;
}
