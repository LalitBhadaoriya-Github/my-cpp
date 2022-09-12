#include <iostream>
#include <string>
#include "school.h"

using namespace std;
int main()
{
   std::string name;
   int rool_no, marks, id;
   std::string sub;

   school obj;
   std::cout<<"how student you search : ";
   std::cin>>id;
   obj.read_student_data(id, name,rool_no,sub,marks);
   std::cout<<"Name : "<<name<<std::endl<<"Roll No : "<<rool_no<<std::endl;
   std::cout<<"Subject : "<<sub<<std::endl<<"Marks : "<<marks<<std::endl;
}
