#include <iostream>
#include <string>
#include "student.h"
#pragma once

class school
{
    public:
    student student1;
    student student2;
    student student3;

    school();
 
    void  read_student_data(int id, std::string& l_name, int& a_rool, std::string& a_sub, int& a_marks);

    student* get_id(int& a_id);

};

