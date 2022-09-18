#include <iostream>
#include "school.h"


school::school():student1(1,"abhis",23,"math",78)
    ,student2(2,"manoj",24,"math",50)
    ,student3(3,"karan",25,"math",80)
    {
    }

void school::read_student_data(int id, std::string& l_name ,int& a_rool, std::string& a_sub,int& a_marks)
{
    student *stu_ptr=get_id(id);
    if(stu_ptr == nullptr)
    {
       std::cout<<"unable to read id "<<std::endl;
    }
    stu_ptr->read_data(l_name,a_rool,a_sub,a_marks);
    std::cout<<l_name<<std::endl;
}

student* school::get_id(int& a_id)
{
    switch(a_id)
    {
        case 1:return &student1;
        case 2:return &student2;
        case 3:return &student3;
        default: break;
    }
   return nullptr;
};
