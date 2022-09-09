#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
	date()
	{
		dd=0;
		mm=0;
		yy=0;
	}
	date(int d,int m,int y):dd(d),mm(m),yy(y)
	{	}
	friend void disp_date(date d1);
};
void disp_date(date d1)
{	
	cout<<d1.dd<<"/"<<d1.mm<<"/"<<d1.yy;
}
class student
{
	int rollno,i=1;
	date dob;
	public:
	student()
	{
		rollno=i;
		i++;
	}
	student(int rno,int d,int m,int y)
	{
		rollno=rno;
		date d1(d,m,y);
		dob=d1;
	}
	disp_stud()
	{
		cout<<"Roll no = "<<rollno<<" DOB = ";
		disp_date(dob);
	}
};
int main()
{
	student s1(5,12,12,94);
	s1.disp_stud();
	return 0;
}








