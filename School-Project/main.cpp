#include <iostream>

using namespace std;

void show(int a, int b)
{
    cout<<a+b<<endl;
}

int main()
{
    int chose;
    char school_name;
    cout<<"Enter school name : ";
    cin>>school_name>>endl;
    while(true)
    {
        cout<<"insert data in school ----> 1"
        cout<<"read student data --------> 2"<<endl;
        cout<<"read teacher data --------> 3"<<endl;
        cout<<"exit ---------------------> 4"<<endl;
        cout<<"chose option =============> : ";
        cin>>chose;
        if(chose == 1)
        {
            school school_name();
        }
        else if(chose == 2)
        {
            school_name.student_read();
        }
        else if(chose == 3)
        {
            school_name.teacher_read();
        }
        else
        {
            break;
        }
    }
}
