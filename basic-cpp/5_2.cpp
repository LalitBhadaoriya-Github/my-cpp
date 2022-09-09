#include<iostream>
using namespace std; 
class shape
{
	protected:
		double x, y;
	public:
		void getdata(double a, double b)
		{
			x=a;
			y=b;
		}
		virtual void display_area()=0;
};
class triangle:public shape
{
	double tri_area; 
	void display_area()
	{
		tri_area=(1*x*y)/2;
		cout<<"area of triangle is:"<<tri_area<<endl;
	}
};
class rectangle:public shape
{
	double rec_area; 
	void display_area()
	{
		rec_area=x*y;
		cout<<"area of rectangle is:"<<rec_area;
	}
};
int main()
{
	shape *p; 
	triangle t; 
	rectangle r;
	p=&t;
	p->getdata(10,30);
	p->display_area();
	p=&r;
	p->getdata(20,30); 
	p->display_area();
	return 0;
}
