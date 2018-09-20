#include<iostream>
using namespace std;

class polar
{
float angle;
float radius;
static int count;
public:
	polar()
	{
		angle=0;
		radius=0;
		count++;
	}
	polar(float a,float r)
	{
		angle=a;
		radius=r;
		count++;
	}
	~polar()
	{
		count++;
	}
	static void display()
	{
		cout<<"count:"<<count<<endl;
	}
};
int polar::count;
int main()
{
	polar::display();
	polar p1,p2(4,8);
	p1.display();
	{
		polar p3(3,4);
		p1.display();
		polar p4;
		p2.display();
	}
	p1.display();
	p2.display();
	polar p5;
	p2.display();
}
