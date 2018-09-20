#include<iostream>

using namespace std;

class complex
{

	float real;
	float img;
public:
	friend istream& operator>>(istream &,complex);
	friend ostream& operator<<(ostream &,complex);

	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return(temp);
	}
	
};
	istream& operator>>(istream &cin,complex &c)
	{
		cin>>c.real>>c.img;
		return(cin);
	}
	ostream& operator<<(ostream &cout,complex &c)
	{
		cout<<"real="<<c.real<<endl;
		cout<<"img="<<c.img<<endl;
		return(cout);
	}
int main()
{
complex c3,c2,c1;
c3=c1+c2;
cin>>c1>>c2;
cout<<c3<<endl;
return 0; 
}
