#include <iostream>
#include <string>

class student
{
    int id, rool, marks;
    std::string name;
    std::string sub;
    public:

    student(int a_id, const char* a_name, int a_rool, const char* a_sub, int a_marks);

    void read_data(std::string& a_name, int& a_rool, std::string& a_sub, int& a_marks);
};
