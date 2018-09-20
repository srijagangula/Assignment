#include<iostream>
using namespace std;
int main()
{
int a[10]={121,22,35,64,95,68,76,85,39,10},i,num,pos,count=0;
for(i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
cout<<"give a number"<<endl;
cin>>num;
for(i=0;i<10;i++)
{

int pos=i+1;
if(num==a[i]){
count=1;
cout<<"numb found at position "<<pos<<endl;
}
}
if(count==0)
{
cout<<"number not found";
}
return 0;
}


