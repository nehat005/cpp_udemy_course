#include <iostream>

using namespace std;
class Base
{
   public:
       virtual void fun1()
       {
           cout<<"Fun1 of base"<<endl;
       }
};

class Derived:public Base
{
public:
    void fun1()
    {
        cout<<"Fun1 of Derived"<<endl;
    }
};


int main()
{
    Base *ptr;
    Derived d;
    ptr=&d; //Base class pointer assigned to derived class object
    ptr->fun1();
    d.fun1();
    d.Base::fun1();
    return 0;
}
