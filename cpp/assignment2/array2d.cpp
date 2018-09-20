#include<iostream>
using namespace std;
int main()
{
int i,j,a[2][2];
cout<<"enter elements of array"<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cin>>a[i][j];
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
