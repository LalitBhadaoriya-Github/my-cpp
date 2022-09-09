#include<iostream>
using namespace std;
namespace ns 
{ 
    void display(); 
    class geek 
    { 
    public: 
       void display(); 
    }; 
} 
void ns::geek::display() 
{ 
    cout << "ns::geek::display()\n"; 
} 
void ns::display() 
{ 
    cout << "ns::display()\n"; 
} 
int main() 
{ 
    ns::geek obj; 
    ns::display(); 
    obj.display(); 
    return 0; 
} 
