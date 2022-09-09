#include<iostream>
using namespace std;
const int MAX=100;
class basic_info
{
	private:
		char name[50];
		int rollno;
		char sex;
	public:
		void getdata1()
		{
    		cout<<"Enter a name \n";
    		cin>>name;
    		cout<<"Roll no:\n";
    		cin>>rollno;
    		cout<<" Sex:\n";
			cin>>sex;
		}
		void display1()
		{
    		cout<<name<<"\t";
    		cout<<rollno<<"\t";
    		cout<<sex<<"\t";
		}
};
class physical_info:public basic_info
{
	private:
		float height;
		float weight;
	public:
		void getdata( )
		{
			getdata1();
			cout<<" Height \n";
			cin>>height; 
			cout<<" weight \n";
			cin>>weight;
		}
		void display( )
		{
			display1( );
			cout<<height<<"\t";
			cout<<weight<<" ";
		}
};
int main()
{
    physical_info a[MAX];
	int i,n;
	cout<<"How many students\n";
	cin>>n;
	cout<<"Enter the following infromation\n";
	for(i=0;i<n;i++)
	{
    	cout<<"Record :"<<i+1<<endl;
    	a[i].getdata( );
	}
	cout<<endl;
	cout<<"Name\tRollNo\tSex Height Weight\n";
	for(i=0;i<n;i++)
	{
		a[i].display( );
		cout<<endl;
	}
	cout<<endl;
	cout<<"___________________________________\n";
	return 0;
}

