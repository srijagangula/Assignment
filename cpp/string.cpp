#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	char *sname;
	int len;
public :
	
	string1()
	{
		sname= NULL;
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
	~string1()
	{
		cout<<"In destructor"<<endl;
		if(sname!=NULL)	
		delete sname;
	cout<<"end destructor"<<endl;
	}

	void Display()
	{
		if(sname!=NULL)	
			cout<<"sname="<<sname<<endl;
		else
			cout<<"Null string"<<endl;
	}
};
int main()
{
	string1 s1,s2("apple"),s3("grapes"),s4(s2);
	s1.Display();
	s2.Display();
	s3.Display();
	s4.Display();
}
