#include <iostream>
#include <string>
#include "school.h"

using namespace std;
int main()
{
   std::string name;
   int rool_no;
   std::string sub;
   int  marks;

   school obj;
   obj.read_student_data(1, name,rool_no,sub,marks);

   cout<<"name : "<<name<<endl; 
   cout<<rool_no<<endl;
}
