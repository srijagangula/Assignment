#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class string1
{
	char *sname;
	int len;
public:
	string1()
	{
		sname=NULL;
		len=0;
	}	
	string1(const char *s)
	{
		sname=new char[strlen(s)+1];	
		strcpy(sname,s);
		len=strlen(s);
	}
	string1(const string1 &s)
	{
		sname=new char[s.len+1];	
		strcpy(sname,s.sname);
		len=s.len;
	}
	string1 operator+(string1 s)
	{
		string1 temp;
		temp.sname=new char[len+s.len+1];
		strcpy(temp.sname,sname);
		strcat(temp.sname,s.sname);
		temp.len=len+s.len;
		return temp;	
	}
	string1 operator=(string1 s)
	{
	if(sname!=NULL)
		delete sname;
		sname=new char[s.len+1];
		strcpy(sname,s.sname);
		len=s.len;
	return (*this);	
	}
	char operator[](int index)
	{	
	if((index>=0) && (index<len))
	return sname[index];
	else	
	return 0;	
	}	
	void display()
	{
	if(sname!=NULL)
	cout<<"The string is:"<<sname<<endl;
	else 
	cout<<"Null string"<<endl;
	}
	~string1()
	{
	if(sname!=NULL)
	delete sname;	
	}
friend ostream& operator<<(ostream&,string1);
friend istream& operator>>(istream&,string1&);
};
	ostream& operator<<(ostream &out,string1 &s)
	{
		if(s.sname!=NULL)
		cout<<"name:"<<s.sname<<"\t"<<endl;
		cout<<"length:"<<s.len<<endl;
		return cout;
	}
	istream& operator>>(istream &in,string1 &m)
	{
		char c[100];
		if(m.sname!=NULL)
		delete m.sname;
		cin>>c;
		m.sname=new char[strlen(c)+1];
		strcpy(m.sname,c);
		m.len=strlen(c);	
		return cin;
	}

int main()
{
	string1 s1,s2("apple"),s3("grapes"),s4(s2),s5,s6,s7;
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	cout<<"overloading of >> operator"<<endl;
	cout<<"enter any string"<<endl;
	cin>>s7;
	s7.display();
	s5=s2+s3;
	cout<<"overloading of + operator"<<endl;
	s5.display();
	s6=s3;
	cout<<"overloading of = operator"<<endl;
	s6.display();	
	cout<<"overloading of << operator"<<endl;
	cout<<s2<<endl;
	cout<<"overloading of [] operator"<<endl;
	cout<<"s2[0]="<<s2[0]<<endl;
	return 0;
}
