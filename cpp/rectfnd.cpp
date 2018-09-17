#include<iostream>
using namespace std;
class circle;
class Rectangle
{
	int len,bre,area,peri;
public:
	Rectangle()
	{
		cout<<"enter the len :"<<endl;
		cin>>len;
		cout<<"enter the bre :"<<endl;
		cin>>bre;
		area=peri=0;
	}
	void cal_area()
	{
		area =len*bre;
	}
	void cal_peri()
	{
		peri =2*(len+bre);
	}
friend void display(Rectangle,circle);
};

class circle
{
	float rad,area,peri;
public:
	circle()
	{
		cout<<"enter the radius :"<<endl;
		cin>>rad;
		area=peri=0;
	}
	void cal_area()
	{
		area =3.14*rad*rad;
	}
	void cal_peri()
	{
		peri =2*3.14*rad;
	}
friend void display(Rectangle,circle);
};

void display(Rectangle R,circle C)
{
	cout<<"Details of Rectangle :"<<endl;
	cout<<"length:"<<R.len<<endl;
	cout<<"breadth :"<<R.bre<<endl;
	cout<<"area:"<<R.area<<endl;
	cout<<"perimeter:"<<R.peri<<endl;
	
	cout<<"Details of circle :"<<endl;
	cout<<"Radius:"<<C.rad<<endl;
	cout<<"area:"<<C.area<<endl;
	cout<<"perimeter:"<<C.peri<<endl;

}

main()
{
	Rectangle robj;
	robj.cal_area();
	robj.cal_peri();

	circle cobj;
	cobj.cal_area();
	cobj.cal_peri();

	display(robj,cobj);
}
