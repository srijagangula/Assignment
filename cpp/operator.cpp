complex::complex()
{
	cout<<"in default constructor"<<endl;
	real=img=0;

}
complex::complex(int a,int b)
{
	cout<<"in parameterised constructor"<<endl;
	real=a;
	img=b;
	cout<<real<<img<<endl;

}
void complex::display()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
		cout<<img<<"i"<<endl;

}
complex complex::operator +(complex e)
{
	complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;

}
complex complex::operator -(complex e)
{
	complex temp;
	temp.real=real-e.real;
	temp.img=img-e.img;
	return temp;

}
complex complex::operator *(complex e)
{
	complex temp;
	temp.real=real*e.real;
	temp.img=img*e.img;
	return temp;

}
complex complex::operator +(int x)
{
	complex temp;
	temp.real=real+x;
	temp.img=img;
	return temp;

}
complex complex::operator ++(int)
{
	complex temp;
	temp.real=real++;
	temp.img=img++;
	return temp;

}
complex complex::operator ++()
{
	++real;
	++img;
	return *this;

}
complex::~complex()
{
	cout<<"in destruction"<<endl;

}
