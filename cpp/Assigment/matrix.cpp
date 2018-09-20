#include<iostream>
using namespace std;
class matrix
{
int **arr;
int row,col;
public:
	matrix()
	{
	row=2;
	col=2;
	arr=new int *[row];
	for(int i=0;i<row;i++)
		arr[i]=new int[col];
	}
	matrix(int x,int y)
	{
	cout<<"In P.C"<<endl;
	row=x;
	col=y;
	arr=new int *[row];
	for(int i=0;i<row;i++)
		{
		arr[i]=new int[col];
		cout<<"Enter the elements"<<endl;
		for(int j=0;j<col;j++)
			cin>>arr[i][j];
		}
	}
	~matrix()
	{
		for(int i=0;i<row;i++)
		{
			delete []arr[i];
			arr[i]=NULL;
			delete arr;
			arr=NULL;
		}	
	}
	void display()
	{
	cout<<"Matrix:"<<endl;
	for(int i=0;i<row;i++)
		{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
		}
	}
	matrix operator+(matrix m)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<row;i++)
		{
		        for(int j=0;j<col;j++)
		         	cout<<arr[i][j]+m.arr[i][j]<<"\t";
			cout<<endl;
		}
	}
	matrix operator+(int x)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<row;i++)
		{
		        for(int j=0;j<col;j++)
		         	cout<<arr[i][j]+x<<"\t";
			cout<<endl;
		}
	}
	
	matrix operator-(matrix m)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<row;i++)
		{
		        for(int j=0;j<col;j++)
		         	cout<<arr[i][j]-m.arr[i][j]<<"\t";
			cout<<endl;
		}
	}
	matrix operator-(int x)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<row;i++)
		{
		        for(int j=0;j<col;j++)
		         	cout<<arr[i][j]-x<<"\t";
			cout<<endl;
		}
	}

friend matrix operator+(int,matrix);
friend matrix operator-(int,matrix);
friend void operator<<(ostream&,matrix&);
friend void operator>>(istream&,matrix&);
}; 
matrix operator+(int x,matrix m)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<m.row;i++)
		{
		        for(int j=0;j<m.col;j++)
		         	cout<<x+m.arr[i][j]<<"\t";
			cout<<endl;
		}
	} 
matrix operator-(int x,matrix m)
	{
		cout<<"Resultant Matrix:"<<endl;
		for(int i=0;i<m.row;i++)
		{
		        for(int j=0;j<m.col;j++)
		         	cout<<x-m.arr[i][j]<<"\t";
			cout<<endl;
		}
	} 
void operator >>(istream &in,matrix &m)
{
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
		{
			cout<<"Enter"<<i<<"th row"<<" "<<j<<"th element";
			in>>m.arr[i][j];			
		}
	}
}
void operator <<(ostream &out,matrix &m)
{
	cout<<"Resultant Matrix:"<<endl;
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
			out<<m.arr[i][j]<<"\t";	
		out<<endl;	
	}
}

int main()
{
	int r,c;
	cout<<"Enter th no of rows and col matrix"<<endl;
	cin>>r>>c;
	matrix m1(r,c),m2(r,c),m3;
	m1.display();
	m2.display();
	cout<<"overloading of + operator"<<endl;
	m1+m2;	
	m1+3;
	4+m2;
	cout<<"overloading of - operator"<<endl;
	m1-m2;
	m1-3;
	4-m2;
	cout<<"overloading of >> operator"<<endl;
	cin>>m3;
	cout<<"overloading of << operator"<<endl;
	cout<<m3;
	return 0;
}














