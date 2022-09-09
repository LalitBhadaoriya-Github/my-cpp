#include<iostream>
#include<fstream>
using namespace std;
class phone
{
	public:
		char name[20];
		long int phone_no;
		void getdata()
		{
			cout<<"Enter the name and phone_no\n"; 
			cin>>name>>phone_no;
		}
		void putdata()
		{
			cout<<endl<<name<<"\t"<<phone_no<<endl;
		}
};
int main()
{
	fstream f; 
	phone ph; 
	int n;
	f.open("Phonebook.txt",ios::out|ios::in|ios::app);
	cout<<"\nEnter the total no_of records:"; cin>>n;
	for(int i=0;i<n;i++)
	{
		ph.getdata();
		f.write((char *)&ph,sizeof(ph));
	}
	f.seekg(0);
	cout<<"\n\nThe content of the file is:\n\n"; 
	cout<<"NAME"<<"TELEPHONE_NO"; 
	while(f.read((char *)&ph,sizeof(ph)))
		ph.putdata();
	f.close();
}
