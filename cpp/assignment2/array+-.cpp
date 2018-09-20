#include<iostream>
using namespace std;
int main()
{
int a[5],i,sum=0,mul=1;
for(i=0;i<5;i++)
{
cin>>a[i];
cout<<a[i]<<endl;
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
mul=mul*a[i];
}
cout<<"sum val="<<sum<<endl;
cout<<"product val="<<mul<<endl;

return 0;
}
