#include <iostream>
#include <string>
using namespace std;

class Employee
{
private: int salary=50000;
public:
    int age, exp; // exp stands for previous experience of employee
    void employee()
    {
        cout<<"Enter age and experience of employee: ";
        cin>>age>>exp;
    }

    int getsal()
    {
        return salary;
    }
    void setsal(int x)
    {
        salary=x;
    }

};

class Fulltime: public Employee
{
public:
    void qualify(string obj_name2,int exp)
    {
        if(age>21 && age<56)
        {
            exp_check(obj_name2,exp);
        }

    }
    void exp_check(string obj_name2,int exp)
    {
        int start_year;
        cout<<"Enter start_year at our company"<<endl;
        cin>>start_year;
        int current_year=2020;
        int total_exp=current_year-start_year+exp;
        cout<<"Years of experience of "<<obj_name2<<" : "<<total_exp<<endl;
        if(total_exp>5 && exp<10)
        {
            Employee::setsal(150000);
        }
        else if(total_exp>10 && total_exp<20)
        {
            Employee::setsal(150000);
        }
        else
        {
            Employee::setsal(150000);
        }
    }

};

class Parttime: public Employee
{
public:
    void age(string obj_name3)
    {
        if (age>18 && age<=21)
        {
            cout<<"Salary of "<<obj_name3<<" : "<<Employee:getsal();
        }
    }
};
int main()
{
    string obj_name;
    cout<<"Enter name of employee: "<<endl;
    cin>>obj_name;
    cout>>"Enter name of Full Time employee: "<<endl;
    cin>>obj_name2;
    cout>>"Enter name of Part time employee: "<<endl;
    cin>>obj_name3;

    Employee obj_name;
    obj_name.employee();
    obj_name.getsal();
    Fulltime obj_name2;
    obj_name2.qualify(obj_name2,exp);
    Parttime obj_name3;
    obj_name3.age(obj_name3);
    return 0;
}
