#include<iostream>
using namespace std;
class complex
{
float img,real;

public:
	
	complex()
	{
		real=0;
		img=0;
	}
	complex(float r,float i)
	{
		real =r;
		img=i;
	}
	complex(float r)	
	{
		real=img=r;
	}	
	complex(const complex &c)
	{
		real=c.real;
		img=c.img;
	}

	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
	complex operator-(complex c)
	{
		complex temp;
		temp.real=real-c.real;
		temp.img=img-c.img;
		return temp;
	}
	complex operator-()
	{
		complex temp;
		temp.real=-real;
		temp.img=-img;
		return temp;
	}
	complex operator++()
	{
		++real;
		++img;
		return (*this);
	}
	complex operator++(int x)
	{
		complex temp;
		temp.real=real++;
		temp.img=img++;
		return temp;
	}
	complex operator,(complex c)
	{
		return c;
	}
	complex operator+=(complex c)
	{
		real+=c.real;
		img+=c.img;
		return (*this);
	}
	complex operator->()
	{
		return (*this);
	}

	void print_complex()
	{
	cout<<real<<"+i"<<img<<endl;
	}
	
};
int main()
{

complex c1(2,4),c2(5,2),c3;

c3=c1+c2;
c3.print_complex();
c3=c1-c2;
c3.print_complex();
c3=-c2;
c3.print_complex();
c3=++c2;
c3.print_complex();
c3=c2++;
c3.print_complex();
c3=(c1,c2);
c3.print_complex();
c3+=c2;
c3.print_complex();
return 0;
}

	
