#include<iostream>
#define MAX 100
using namespace std;
void exchange(int (&a)[MAX],int &n);

int main()
{
	int a[MAX],size,i;
	cout<<"Enter the Array size : ";
	cin>>size;
	cout<<"Enter the Array elements :\n";
	for(i=0;i<size;i++)
		cin>>a[i];
	exchange(a,size);
	cout<<"After sorting :\n"; 
	for(i=0;i<size;i++)
		cout<<a[i]<<endl; 
	return 0;
}
void exchange(int (&a)[MAX],int &n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j]; 
				a[j]=temp;
			}
}
