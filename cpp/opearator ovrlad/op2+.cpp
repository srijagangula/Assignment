#include<iostream>
using namespace std;
class complex
{
float real;
float img;
public:
complex operator+(complex c)
{
complex temp;
temp.real=real+c.real;
temp.img=img+c.img;
return temp;
}
void get_complex()
{
cin>>real>>img;

}
void print_complex()
{
cout<<real<<"+i"<<img<<endl;
}
};
int main()
{
complex c1,c2,c3;
c1.get_complex();
c1.print_complex();
c2.get_complex();
c2.print_complex();
c3=c1+c2;
c3.print_complex();
return 0;
}
