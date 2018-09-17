#include<iostream>
using namespace std;
class complex
{
float real;
float img;
public:
/*complex()
{
real=0;img=0;
}
complex(int i,int r)
{
real=r;img=i;
}*/
void get_complex()
{
cout<<"enter the real and img number\n"; 
cin>>real>>img;
}
void print_complex()
{
cout<<"real="<<real<<endl;
cout<<"img="<<img<<endl;
}
};
int main()
{
complex c1;
c1.get_complex();
c1.print_complex();
//return 0;
}

