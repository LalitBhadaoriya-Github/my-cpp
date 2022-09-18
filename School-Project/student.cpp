#include <iostream>
#include "student.h"

student::student(int a_id,const char* a_name, int a_rool, const char* a_sub, int a_marks):id(a_id)
,name(a_name)
,rool(a_rool)
,sub(a_sub)
,marks(a_marks)
{
}

void student::read_data(std::string& a_name,int& a_rool, std::string& a_sub,int& a_marks)
{
    a_name=name;
    a_rool=rool;
    a_sub=sub;
    a_marks=marks;
}
