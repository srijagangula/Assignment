#include<iostream>
#include<cmath>
using namespace std;
class point
	{

	float x1,x2,y1,y2;

public:
	void get_point()
	{
	cout<<"enter point values"<<endl;
	 cin>>x1>>x2>>y1>>y2;

	}
	/*void display()
	{
	
	cout<<"dist ="<<d<<endl;
	 
	}*/
friend void get_distance();
};
void get_distance()
{
	float sq1,sq2,d;
	
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<"dist ="<<d<<endl;
}

main()
{
	point p;
	p.get_point();
	get_distance();
	
}


