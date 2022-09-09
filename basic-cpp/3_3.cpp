#include<iostream>
#include<stdio.h>       
#include<string.h>
using namespace std;
class String
{
	char str[20];
	public:
	    String()       
		{
			gets(str);
		}
        int operator==(String s)
        {
			if(!strcmp(str,s.str))
				return 1;
			return 0;
        }
};
int main()
{
    cout<<"Enter first string:";
    String s1;
	cout<<"Enter second string:";
    String s2;
	if(s1==s2)                 
		cout<<"\nStrigs are Equal\n";
    else
		cout<<"\nStrings are Not Equal\n";
    return 0;
}
