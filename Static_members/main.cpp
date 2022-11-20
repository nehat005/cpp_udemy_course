#include <iostream>

//static members of a class are those which are allocated memory only once for all its objects.
//They need to be declared as global variables but using scope resolution to indicate they belong only to the class
//Also , constructor by the name of Class doesnt need to be called in main function ***


using namespace std;

class Test
{
private:
    int a, b;
public:
    static int c;
    void fun()
    {
        a=10;
        b=10;
        c++;
        cout<<"Count is "<<c<<endl;
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }

    Test()
    {
        a=15;
        b=13;
        c++;
        cout<<"Count is "<<c<<endl;
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    static int getCount()
    {
        //STatic functions can only access static data members of class
        return c;
    }

};

int Test::c=0; //Important


int main()
{
    Test t1;
    Test t2;
    t1.fun();
//    t1.Test(); //Test constructor doesnt need to be called
    t2.fun();
    Test::c=25;
    cout<<"To show that static data members can be accessed just by scope resolution, and not just using objects"<<endl;
    cout<<"New value of count after changing it in main function: "<<Test::c<<endl;
    cout<<"Value of count using test object after having its value changed in main function: "<<t2.c<<endl;
    cout<<"Value of count using static function of the class: "<<t2.getCount()<<endl;
    return 0;
}
