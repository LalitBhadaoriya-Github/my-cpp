# include<iostream>
using namespace std;
class Addition
{
	int real,img;
	public:
	Addition()
	{
		real=0;
		img=0;
	}
	Addition(int r)           
	{
		real=r;
		img=r;
	}
	Addition(int r,int i)      
	{
   		real=r;
   		img=i;
   	}
   	Addition(Addition &c)    
   	{
    	real=c.real;
    	img=c.img;
   	}
   	void print()
   	{
   		cout<<"\n\t The sum of two Complex nos. is "<<real<<"+"<<img<<"i.";
   	}
   	friend Addition sum(Addition,Addition);     
};
Addition sum(Addition add1,Addition add2)
{
	Addition add3;
 	add3.real=add1.real+add2.real;
 	add3.img=add1.img+add2.img;
 	return add3;
}
int main()
{
 	int a,b,c;
 	cout<<"\n\tFor same values :\t";
 	cout<<"\n\tEnter the same value of real and imaginary part of number 1:\n\t";
 	cin>>a;
 	Addition a1(a);               
	cout<<"\n\tFor different values :\t";
 	cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";
 	cin>>b>>c;
 	Addition a2(b,c);                  
 	Addition a3;
	a3=sum(a1,a2);       
 	a3.print();
 	return 0;
}
