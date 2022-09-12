#include <iostream>
#include "teachers.h"

tracher::teacher(char name, char address, int mobile_no, char father_name, char subject):teachers_name(name)
    ,teachers_address(address)
    ,teachers_mobile_no(mobile_no)
    ,teachers_father_name(father_name)
    ,subject_teacher(subject){

    }

    void teacher::read_info(char name, char address, char father_name, char subject, int mobile_no)
    {
        name = teachers_name;
        address = teachers_address;
        father_name = teachers_father_name;
        subject = subject_teacher;
        mobile_no = teachers_mobile_no;
    }
