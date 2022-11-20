#include <iostream>

using namespace std;

class Parent
{
private: int a;
protected: int b;
public:
    int c;
    void fun()
    {
        a=7;
        b=5;
        c=15;
    }
    void seta(int aa)
    {
        a=aa;
        cout<<"Value of a set= "<<a<<endl;
    }
    int geta()
    {
        cout<<"Value of a obtained= "<<a<<endl;
        return a;
    }

};
class child: protected Parent
{
    private:int x;
    protected: int y;
    public:
        int z;
        void fun2()
        {
            x=10;
            y=3;
            z=7;
        }
        void setx(int xx)
        {
            x=xx;
            cout<<"Value of x set as= "<<x<<endl;
        }
        int getx()
        {
            cout<<"Value of x obtained= "<<x<<endl;
            return x;
        }

};

class grandchild: public child
{
public:

    int g_a=Parent::geta();
    int g_x=child::getx();
    void print()
    {
        cout<<"Value of a obtained in grandchild= "<<g_a<<endl;
        cout<<"Value of x obtained in grandchild= "<<g_x<<endl;
    }



    void check()
    {
        if(g_x==g_a)
        {
            cout<<"Same private data members in 2 classes"<<endl;
        }
        else{cout<<"Different private data members in 2 classes"<<endl;}
    }



};

int main()
{
    Parent p;
    child c;
    p.seta(5);
    p.geta();
    c.setx(7);

    grandchild g;
    g.print();
    g.check();
    return 0;
}
