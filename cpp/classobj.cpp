#include<iostream>
using namespace std;

class complex
{
float real;
float img;
public:
void get_complex()
{cout<<"enter the real and img number\n"; 
cin>>real>>img;
}
void print_complex()
{
cout<<"real="<<real<<endl;
cout<<"img="<<img<<endl;
}
void add_complex(complex   *c1,complex *c2)
{

real=c1->real+c2->real;
img=c1->img+c2->img;

}

};
int main()
{
complex c1,c2,c3;
c1.get_complex();
c1.print_complex();
c2.get_complex();
c2.print_complex();
c3.add_complex(c1,c2);
c3.print_complex();

}

