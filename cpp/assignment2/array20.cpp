#include<iostream>
using namespace std;
int main()
{
int i,a[20],countm=0,countn=0,counto=0,countp=0,countq=0;
cout<<"enter 20 elements"<<endl;
for(i=0;i<=20;i++)
{
cin>>a[i];
cout<<a[i]<<endl;
}
for(i=0;i<=20;i++)
{

if(a[i]<0)
{
countm++;
}
else if(a[i]==0)
{
countn++;
}
else
{
counto++;
}
}
for(i=0;i<=20;i++)
{
if(a[i]%2==0)
{
countp++;
}
else
{

countq++;
}
}
cout<<"neg numbers="<<countm<<endl;
cout<<"zero numbers="<<countn<<endl;
cout<<"pos numbers="<<counto<<endl;
cout<<"even numbers="<<countp<<endl;
cout<<"odd numbers="<<countq<<endl;
return 0;
}
