#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

class student
{
	int rollno,tot,se,ds,os,c,cpp,avg;
	char name[20],grade;
	public:
	friend istream& operator>>(istream& cin,student &s);
	friend ostream& operator<<(ostream& cout,student s);
	friend void result(student s[],int n);
};
istream& operator>>(istream& cin,student &s)
{
	cout<<"enter the name of student"<<endl;
	cin>>s.name;
	cout<<"enter rollno"<<endl;
	cin>>s.rollno;
	cout<<"enter marks of student"<<endl;
	cout<<"SE=";
	cin>>s.se;
	cout<<"DS=";
	cin>>s.ds;
	cout<<"OS=";
	cin>>s.os;
	cout<<"C=";
	cin>>s.c;
	cout<<"CPP=";
	cin>>s.cpp;
	s.tot=(s.se+s.ds+s.os+s.c+s.cpp);
	s.avg=s.tot/5;
	return cin;
}
ostream& operator<<(ostream& cout,student s)
{
	cout<<"Name:"<<s.name<<endl;
	cout<<"Rollno:"<<s.rollno<<endl;
	cout<<"Marks:"<<endl;
	cout<<"SE:"<<s.se<<endl;
	cout<<"DS:"<<s.ds<<endl;
	cout<<"OS:"<<s.os<<endl;
	cout<<"C:"<<s.c<<endl;
	cout<<"CPP:"<<s.cpp<<endl;
	if(s.se>100 || s.ds>100 || s.os>100 || s.c>100 ||s.cpp>100 )
	{
		cout<<"invalid entry"<<endl;
		return cout;
	}
		cout<<"tot marks"<<s.tot<<endl;
	if(s.se<35 || s.ds<35 || s.os<35 || s.c<35 ||s.cpp<35)
	{
		cout<<"failed"<<endl;
		return cout;
	}
		cout<<"AVG"<<s.avg<<endl;
	if(s.avg<=100 && s.avg>=80)
	{
		cout<<"Grade A"<<endl;
	}
	else if(s.avg<80 && s.avg>=60)
	{
		cout<<"Grade B"<<endl;
	}
	else if(s.avg<60 && s.avg>=50)
	{
		cout<<"Grade C"<<endl;
	}
	else if(s.avg<50 && s.avg>=35)
	{
		cout<<"Grade D"<<endl;
	}
	return cout;
	}
void result(student s[],int n)
{
	int i;
	cout<<"\n\n******STUDENTS MARKSHEET******"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\n----student"<<" "<<i+1<<"----"<<endl;
		operator<<(cout,s[i]);
	}
	
}
int main()
{
	int n,i;
	student s[100];
	cout<<"enter total nof students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		operator>>(cin,s[i]);
	}
	result(s,n);
	
	return 0;
}


