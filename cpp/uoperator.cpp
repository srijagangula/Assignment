#include<iostream>
using namespace std;


class
{
private:
complex():real(0),img(0){}
void input()
{
cout<<"enter real and img nubers";
cin >> real;
cin >> img;
}
complex operator - (complex c2)
{
complex temp;
temp.real = real-c2.real;
temp.img = img-c2.img;
return temp;
}
void output()
{
if(img < 0)
cout<<"output complex number:"<<real<<img<<"i";
else
cout<<"output complex number:"<<real<<++<<"i";
}
};
int main()
{
complex c1,c2,result;
cout<<"enter first complex number:\n";
c1.input();
cout<<"enter second complex number:\n";
c2.input();
result =c1-c2;
result.output;
return 0;
}





