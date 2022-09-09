#include <bits/stdc++.h> 
using namespace std; 

void unique(string str, int bal, int siz) 
{ 
    if (bal == siz) 
        cout<<str<<endl; 
    else
    {  
        for (int i = bal; i <= siz; i++) 
        { 
            swap(str[bal], str[i]); 
            unique(str, bal+1, siz); 
            swap(str[bal], str[i]); 
        } 
    } 
} 
  
int main() 
{ 
	string str;
    cout << "Enter the String check for possible unique combinations: ";
	cin >> str; 
    int n = str.size(); 
    unique(str, 0, n-1); 
    return 0; 
} 
