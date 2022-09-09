#include <iostream>
  
using namespace std; 

    RomanConverter(int nun) {

        string str[] = {"D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string result = "";
        
        if (num <= 500){
        	for (auto int i = 0; i < 13; ++i)
        	{
            	while(num - values[i] >= 0)
            	{
                	result += str[i];
                	num -= values[i];
            	}
        	}
		}
		else{
			cout << "the value is vig this program range is 500";
		}
		
        return result;
    }
    
    int main(){
    	int val;
    	cout << "Enter the value of convert roman no : ";
    	cin >> val;
    	RomanConverter(val)
	}
