#include<iostream>
using namespace std;
int main()
{
int *ip,n;
cin>>n;
ip=new int[n];
//ip[n];
cout<<"array:"<<*ip;
delete ip;
cout<<"array:"<<*ip;
}
