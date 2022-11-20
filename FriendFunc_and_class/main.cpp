#include <iostream>

/* This program is to understand how friend functions which are global in code can access all members of a class upon
creating its object */


/*Problems while implementing this pgm:
class name 'new' not possible as its a keyword,
so changed the class name from 'new' to 'neww' */


using namespace std;

class neww;  //class neww will access class old members upon class old's object (This is not inheriting)
            //for this to work, class old includes friend member 'neww' declared as one of it's public members
            //thus, for compiler to know what is this 'neww', as machine code wont understand that its a class, as the
            //class 'neww' is defined below class old. So, need to write class neww here


class old
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend neww;
};

class neww
{
    public:
    void anything()
    {
        old meh;
        meh.a=15;
        std::cout<<meh.a<<endl;
    }
};
class One
{
    private: int a;
    protected: int b;
    public: int c;
    friend void fun(); //important else fun function cant access the class members
};

void fun()
{
    One p; //Accessing members over class object only
    p.a=10;
    p.b=15;
    p.c=20;
    std::cout<<p.a<<" "<<p.b<<" "<<p.c<<endl;
}

int main()
{
    fun();
    neww a;
    a.anything();
    return 0;
}
