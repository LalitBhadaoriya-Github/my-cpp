#include<iostream>
using namespace std;
class Employee
{
	private:
		int empcode;
		char empname[10]; 
	public: 
		void get()
		{
			cout<<"Employee Name :";
			cin>>empname;
			cout<<"Employee Code :"; 
			cin>>empcode;
		}
		void display()
		{
			cout<<endl<<empname<<"\t\t\t"<<empcode;
		}
};
int main()
{
	Employee Emp[6];
	cout<<"Enter employee details:\n "; 
	for(int i=0;i<6;i++)
	{
		cout<<"\nEmployee "<<i+1<<endl; 
		Emp[i].get();
	}
	cout<<"\nEmployee details are as follows :";
	cout<<"\n\nEmployee Name\t\tEmployee Code";
	for(int i=0;i<6;i++)
		Emp[i].display();
	return 0;
}
