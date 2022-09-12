#pragma once
#include "student.h"
#include "teacher.h"

class school
{
    school();

    void teacher_read(char teacher_name);

    void student_read(char student_name);

    void teacher_write();

    void student_write();
};
