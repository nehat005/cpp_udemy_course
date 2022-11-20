#include <iostream>
/*
This code shows that base class exists for generalization of derived classes. The base class
just has pure virtual functions . Pure virtual functions mean that the virtual function is assigned 0;
Base class has no functionality.
If base class has only pure virtual functions, then its functionality is only for polymorphism, not reusability(i.e.
                                                                                                                borrowing features)
All classes having pure virtual functions are abstract classes ***
*/
using namespace std;
class Car
{
public:

    virtual void start()=0;  //Pure virtual function in base class
    virtual void stop()=0;
};

class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova started"<<endl;
    }
    void stop()
    {
        cout<<"Innova stopped"<<endl;
    }
};

class Swift:public Car
{
    void start()
    {
        cout<<"Swift started"<<endl;
    }
    void stop()
    {
        cout<<"Swift stopped"<<endl;
    }
};

int main()
{
    Car *c;
    Innova i;
    Swift s;
    c=&i;
    c->start();
    c->stop();
    c=&s;
    c->start();
    c->stop();

    return 0;
}
