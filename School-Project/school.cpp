#include <iostream>
#include "school.h"

using namespace std;

school::school()
{
    while(true)
    {
        cout<<"student data store ------> 1"<<endl;
        cout<<"teacher data store ------> 2"<<endl;
        cout<<"exit --------------------> 3"<<endl;
        cout<<"chose one option : ";
        cin>>chose;
        if(chose == 1)
        {
            cout<<"how many student are enter : ";
            cin>>cont;
            for(i=0; i<cont; i++)
            {
                cout<<"Enter student name : ";
                cin>>name;
                cout<<"Enter student address : ";
                cin>>address;
                cout<<"Which Class student are Addmission : ";
                cin>>Class;
                
                student name(name,address,Class)
            }
        }
        else if(chose == 2)
        {
            cout<<"how many teachers Enter : ";
            cin>>cont;
            for(i=0; i<cont; i++)
            {
                cout<<"Enter teacher name : ";
                cin>>name;
                cout<<"Enter teacher address : ";
                cin>>address;
                cout<<"Enter teacher mobile no : ";
                cin>>mobile_no;
                cout<<"Enter teacher subject : ";
                cin>>subject;

                teacher name(name, address, mobile_no, subject)
            }
        }
        else
        {
            break;
        }
    }
}

void school::teacher_write()
{
}

void school::student_write()
{
}
