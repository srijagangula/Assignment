#include<iostream>
using namespace std;
class complex
{
float real;
float img;
public:
complex(int r=0,int i=0)
{
real=r,img=i;
}
complex operator+(complex const c)
{	
	complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return (temp);
}

void print_complex()
{

cout<<real<<"+i"<<img<<endl;


}


};
int main()
{
	complex c1(2,4),c2(3,5);
	complex c3=c2+c1;
	//c3.get_complex();
	c3.print_complex();
}
