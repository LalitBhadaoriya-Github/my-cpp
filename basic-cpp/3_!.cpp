#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b);
double power(int c, double d);
int main()
{

	int i1,i2,i3;
	double d1;
	cout<<"\nEnter Two Integers To Calculate Power : ";
	cin >>i1>>i2;
	int p1=power(i1,i2);
	cout<<"\nThe Power of "<<i1<<" and "<<i2<<" is : "<<p1; 
	cout<<"\n\nEnter One Integer And One Double To calculate power :"; 
	cin>>i3>>d1;
	double p2=power(i3,d1);
	cout<<"\nThe Power of "<<i3<<" and "<<d1<<" is : "<<p2;
	return 0;
}
int power(int a,int b)
{
	return(pow(a,b));
}
double power(int c, double d)
{
	return(pow(c,d));
}
