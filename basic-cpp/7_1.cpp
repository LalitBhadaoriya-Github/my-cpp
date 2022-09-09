#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   fstream file;
   file.open("sample.txt",ios::out);
   if(!file)
   {
       cout<<"Unable to create file!!!"<<endl;
       return 0;
   }
   cout<<"File created successfully."<<endl;
   file<<"Hello, How r u ?";
   file.close();
   file.open("sample.txt",ios::in);
   if(!file)
   {
       cout<<"Unable to open file!!!"<<endl;
       return 0;
   }   
   char ch;
   cout<<"File content: \n";
   while(!file.eof())
   {
       file>>ch;
       cout<<ch;
   }
    file.close(); 
    return 0;
}
