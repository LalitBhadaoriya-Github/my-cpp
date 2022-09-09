#include<iostream>
using namespace std;
inline void large(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			cout<<"\t"<<a<<" is greatest";
		else
			cout<<"\t"<<c<<" is greatest";
	}
	else
	{
		if(b>c)
			cout<<"\t"<<b<<" is greatest";
		else
			cout<<"\t"<<c<<" is greatest";
	}
}
int main()
{
	int a,b,c;
	cout<<"Enter three values\n";
	cin>>a>>b>>c;
	large(a,b,c);
	return 0;
}
