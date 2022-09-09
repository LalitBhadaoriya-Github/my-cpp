#include<iostream>
#include<iomanip>
using namespace std;
ostream &moneyshow(ostream &output)
{
	cout<<'$';
	cout.fill('*');
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	cout.width(10);
	cout<<setprecision(4);
	return output;
}
int main()
{
	double amount;
	cout<<"enter the value:";
	cin>>amount;
	cout<<"\nyour money value:";
	cout<<moneyshow<<amount;
	return 0;
}
