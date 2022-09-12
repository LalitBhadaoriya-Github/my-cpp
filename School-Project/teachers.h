class teacher
{
    private:
    char teachers_name, teachers_address, teachers_father_name, subject_teacher;
    int teachers_mobile_no;

    public:
    teacher(char name, char address, int mobile_no, char subject);

    void read_info(char name, char address, char subject, int mobile_no);
};
