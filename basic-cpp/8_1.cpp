#include <iostream>
using namespace std;
template<class Tmp>
Tmp findMin(Tmp arr[],int n)
{
    int i;
    Tmp min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    return(min);
}
int main()
{
    int intarr[5];
    double dblarr[5];
    cout<<"Integer Values \n";
    for(int i=0; i < 5; i++)
    {
        cout<<"Enter integer value "<< i+1<<" : ";
        cin>>intarr[i];
    }
	cout<<"Decimal values \n";
    for(int k=0; k < 5; k++)
    {
		cout<<"Enter decimal value "<<k+1<<" : ";
        cin>>dblarr[k];
    }
    cout<<"Generic Function to find Minimum from Array\n\n";
    cout<<"Integer Minimum is : "<<findMin(intarr,5)<<"\n";
    cout<<"Float Minimum is : "<<findMin(dblarr,5)<<"\n";
	return 0;
}
