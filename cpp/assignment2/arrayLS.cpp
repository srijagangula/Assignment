#include<iostream>
using namespace std;
int main()
{
int i,a[10],largest,smallest;
for(i=0;i<10;i++)
{
cin>>a[i];
cout<<a[i]<<endl;
}
largest=a[0];

for(i=0;i<10;i++)
{
if(largest<a[i])
{
largest=a[i];
}
}
cout<<"large no is"<<largest<<endl;
smallest=a[0];
for(i=0;i<10;i++)
{
if(smallest>a[i])
{
smallest=a[i];
}
}
cout<<"smaller no is"<<smallest<<endl;


return 0;
}
