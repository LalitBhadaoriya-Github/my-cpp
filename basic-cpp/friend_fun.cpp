#include<iostream>
using namespace std;
class Abc
{
	double a;
	public:
		void setwidth(double b)
		{
			a=b;
		}
		friend void printwidth(Abc m);
};
void printwidth(Abc m)
{
	cout<<"Width is "<<m.a<<endl;
}
int main()
{
	Abc A1;
	A1.setwidth(5);
	printwidth(A1);
	return 0;
}
