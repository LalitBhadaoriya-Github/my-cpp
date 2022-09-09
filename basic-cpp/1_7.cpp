#include<iostream>
using namespace std;
class student
{
	private:
	int rollno, age;
	char sex;
	float weight, height;
	public:
	void get()
	{
		cout<<"Enter roll number";
		cin>>rollno;
		cout<<"Enter age";
		cin>>age;
		cout<<"Enter sex";
		cin>>sex;
		cout<<"Enter weight";
		cin>>weight;
		cout<<"Enter height";
		cin>>height;
	}
	void disp()
	{
		cout<<"\n roll no = "<<rollno;
		cout<<"\n Age = "<<age;
		cout<<"\n Gender = "<<sex;
		cout<<"\n height = "<<height;
		cout<<"\n weight = "<<weight;
	}
};
int main ()
{
	student obj[100];
	int i, n;
	cout<<"How many student data you want to enter ?";
	cin>>n;
	cout<<"\nEnter the information:\n\n";
	for(i=0;i<n;i++)
	{
		obj[i].get();
		cout<<endl;
	}	
	for(i=0;i<n;i++)
	{
		obj[i].disp();
		cout<<endl;
	}
	return 0;
}
