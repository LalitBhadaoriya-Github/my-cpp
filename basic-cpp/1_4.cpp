#include<iostream>
using namespace std;
class fact
{
    int n, i, facti;
    public:
    fact(int x)
    {
        n=x;
    	facti=1;
    }
    fact(fact &x)
    {
        n=x.n;
    	facti=1;
    }
    void calculate()
    {
        for(i=1; i<=n; i++)
        {
    	    facti=facti*i;
        }
    }
    void display()
	{
    	cout<<"\nFactorial is :-"<<facti;
	}
};
int main()
{
    int x;
    cout<<"\nEnter a no. for get its factorial: ";
    cin>>x;
    fact f1(x);
    f1.calculate();
	f1.display();
    fact f2(f1); 
    f2.calculate();
    f2.display();
    return 0; 
}
