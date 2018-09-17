class complex
{
	int real,img;
public:
	complex();
	complex(int,int);
	void display();
	complex operator +(complex);
	complex operator -(complex);
	complex operator *(complex);
	~complex();
	complex operator +(int);
	complex operator ++(int);
	complex operator ++();
};
