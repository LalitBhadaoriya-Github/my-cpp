#include<iostream>
using namespace std;
class Area
{
	public:
		int length;
		int breadth;

		Area()
		{
			length=5;
			breadth=2;
		}
		Area(int l,int b)
		{
			length=l;
			breadth=b;
		}
		void disp()
		{
			cout<<length*breadth<<endl;
		}
};
int main()
{
	system("clear");
	Area A1,A2(5,20);
	int temp;
	A1.disp();
	A2.disp();
	cin>>;
	system("clear");
	return 0;
}
