#include<iostream>
using namespace std;
class complex

{
	float real,img;
	public:
	complex()
	{
		real=0;
		img=0;
	}
	complex(int r,int i)
	{
		real=r;
		img=i;
	}
	void display()
	{
	cout<<"the sum of complex num is "<<real<<"+"<<img<<"i";
	}
	friend complex sum(complex,complex);
};
complex sum(complex a,complex b)
{
	complex t;
	t.real=a.real+b.real;
	t.img=a.img+b.img;
	return t;
}
int main()
{
	int a,b;
	cout<<"Enter real and imaginary no. of 1st complex no.";
	cin>>a>>b;
	complex c1(a,b);
	cout<<"Enter real and imaginary no. of 2nd complex no.";
	cin>>a>>b;
	complex c2(a,b);
	complex c3=sum(c1,c2);
	c3.display();
	return 0;
}
