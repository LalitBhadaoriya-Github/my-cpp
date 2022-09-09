// multiple inheritance.cpp
#include<iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void geta()
    {
 	    cout << "enter value of x: "; 
		cin >> x;
    }
};
class B
{
 	public:
 	int y;
 	void getb()
 	{
 	    cout << "enter value of y: "; 
		cin >> y;
 	}
};
class C : public A, public B   //multipe Inheritance
{
 	public:
  		void sum()
 		{
 		    cout << "Sum of "<<x<<" and "<<y<<" = "<<x+y;
		}
};
class D : public C
{
	public:
		void call(C a)
		{
			a.sum();
		}
};
int main()
{
 	C obj1;
 	D obj2;
 	obj1.geta();
 	obj1.getb();
 //	obj1.sum();
 	obj2.call(obj1);
	return 0;
}   
