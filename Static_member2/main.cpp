#include <iostream>
#include <string.h>
//Program to assign roll numbers to new admissions in college
//ROll_no is object specific variable and static admin_no is class variable(i.e. common for all objects of class)
using namespace std;

class Student
{
public:
    int roll_no;
    string name;
    static int admin_no;    //admission number
    Student(string argname)
    {
        name= argname;
        admin_no++;
        roll_no=admin_no;
        cout<<"Roll Number of student named "<<name<<" is: "<<roll_no<<endl;
    }


};

int Student::admin_no=0; //initial Initialization

int main()
{
    Student s1("neha");
    Student s2("smit");
}
