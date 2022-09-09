#include<iostream>
using namespace std;
class Z
{
	private:
		char ch='M';
		int age=20;
	public:
		friend class A;
};
class A
{
	public:
		void disp(Z z)
		{
			cout<<"ch="<<z.ch<<endl;
			cout<<"age="<<z.age<<endl;
		}
};
int main()
{
	Z z;
	A a;
	a.disp(z);
	return 0;
}
