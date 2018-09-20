#include<iostream>
#include<cmath>
using namespace std;
class point
{

int a,b;

public:
	point()
	{
		a=0;
		b=0;
	}
	point(int x,int y)
	{
		a=x;
		b=y;
	}
	point(int x)
	{
		a=x;
		b=x;
	}
	point(const point &p)
	{
		a=p.a;
		b=p.b;
	}
	void display()
	{
	cout<<a<<b<<endl;	
	}
friend float get_distance(point p1,point p2);

};
float get_distance(point p1,point p2)
{
	int x=p1.a-p2.a;
	int y=p1.b-p2.b;
	float m=sqrt((pow(x,2))+(pow(y,2)));
	return m;
}

int main()
{
	point p1,p2(6,4),p3(p2),p5(4,5);
	p1.display();
	p2.display();
	p3.display();
	float res=get_distance(p2,p5);
	cout<<"distance is :"<<res<<endl;
	return 0;
	
}


