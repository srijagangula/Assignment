#include<iostream>
using namespace std;
int main()
{
int a[10],l,i=0,j,temp;
cout<<"enter 10 elements"<<endl;
for(i=0;i<=10;i++)
{
cin>>a[i];
cout<<a[i]<<endl;
}
cout<<"length="<<i<<endl;
cout<<"rev array is:"<<endl;
j=i-1;
i=0;

while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
for(i=0;i<=10;i++)
cout<<a[i]<<endl;
return 0;
}
