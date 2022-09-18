#include <iostream>
#include <string>

class student
{
    int id;
    std::string name;
    int rool;
    std::string sub;
    int marks;
    public:

    student(int a_id, const char* a_name,int a_rool, const char* a_sub,int a_marks);

    void read_data(std::string& a_name, int& a_rool, std::string& a_sub,int& a_marks);
};
