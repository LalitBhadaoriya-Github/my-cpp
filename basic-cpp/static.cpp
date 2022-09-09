#include<iostream>
using namespace std;
class abc
{
	public:
		static int count;
		abc()
		{
			count++;
		}
};
int abc::count=0;
int main()
{
	abc a;
	cout<<abc::count<<endl;
	abc b;
	cout<<b.count<<endl;
	abc a2;
	cout<<abc::count<<endl;
	return 0;
}
