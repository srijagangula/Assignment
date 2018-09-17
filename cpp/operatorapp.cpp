#include<iostream>
using namespace std;
#include "operator.h"
#include "operator.cpp"

main()
{
	complex e1(10,34),e2(-56,24),e3,e4,e5;
	cout<<"enter the e1 details"<<endl;
	e1.display();

	cout<<"enter the e2 details"<<endl;
	e2.display();

	e3=e1+e2;
	cout<<"e3:";
	e3.display();

	e4=e2-e1;
	cout<<"e4:";
	e4.display();

	complex e6;
	e6=e1+10;
	cout<<"e6:";
	e6.display();

 	cout<<"e1:";
	e1.display();
}
	
