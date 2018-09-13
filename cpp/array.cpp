#include<iostream>
using namespace std;

class complex
{
float real;
float img;
public:
void get_complex()
{
cin>>real;
}
void print_complex()
{
for(int i=1;i<=10;i++)
{
cout<<"real="<<real<<endl;
}
//cout<<"img="<<img<<endl;
}
/*void add_complex(complex *c1,complex *c2)
{

real=c1->real+c2->real;
img=c1->img+c2->img;

}*/

};
int main()
{
complex c[10];

for(int i=1;i<=10;i++)
{
c[i].get_complex();
c[i].print_complex();
}
return 0;
}

