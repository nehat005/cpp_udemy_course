#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:int salary=5000;
    public:
        int age, exp;
        void employee(string obj_name)
        {
            cout<<"Enter age and past experience years of "<<obj_name<<" : "<<endl;
            cin>>age>>exp;

        }
        int getage()
        {
            return age;
        }
        int getexp()
        {
            return exp;
        }

        int setsal(int x)
        {
           salary=x;
           return salary;
        }
        int getsal()
        {
            return salary;
        }
};
class Fulltime:public Employee
{
public:
    void qualify(string name,int exp,int age)
    {
        cout<<"Experience: "<<exp<<endl;
        string ft_name=name;
        int ft_exp=exp;
        cout<<"Experience: "<<ft_exp<<endl;
        cout<<"Going to check age"<<endl;
        //age=Employee::getage();
        cout<<"Age of "<<ft_name<<" is "<<age<<endl;
        if(age>21 && age<56)
        {
            cout<<"Going to check experience"<<endl;
            Fulltime::exp_check(ft_name);
        }
    }
    void exp_check(string name)
    {
        string ft_name=name;
        int exp=Employee::getexp();
        cout<<exp<<endl;
        if(Employee::getexp()>10 && Employee::getexp()<20)
        {
            Employee::setsal(150000);

        }
        else if(Employee::getexp()>=20 && Employee::getexp()<30)
        {
            Employee::setsal(250000);
        }
        else{cout<<"Blah blah"<<endl;}
    }
    int getsal()
    {
        cout<<"Salary: "<<Employee::getsal()<<endl;
        return Employee::getsal();
    }
};
int main()
{
    string name;
    cout<<"Enter employee name: "<<endl;
    cin>>name;
    Employee obj;
    obj.getsal();
    obj.employee(name);
    Fulltime obj2;
    //nt emp_exp=obj.employee();
    int emp_exp=obj.getexp();
    int emp_age=obj.getage();
    cout<<"Age:"<<emp_age<<endl;
    obj2.qualify(name,emp_exp,emp_age);
    obj2.getsal();

    //cout << "Hello world!" << endl;
    return 0;
}
