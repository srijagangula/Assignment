#include<iostream>
using namespace std;

int main()
{
	int **p,rows,cols,j,i;
	cin>>rows>>cols;
	p=new int *[rows];
	for(i=0;i<rows;i++)
	p[i]=new int[cols];
	p[i][j];
	for(i=0;i<rows;i++)
	cout<<p[i][j]<<endl;
	delete p[i];
	delete p;
return 0;
}
