#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void perimeter()=0;
    virtual void area()=0;
};

class Rectangle:public Shape
{
public:
    void perimeter(int l,int b)
    {
        int x=l;
        int y=b;
        int p=2*(x+y);
        cout<<"Perimeter of Rectangle with length = "<<x<<" and breadth = "<<y<<" is = "<<p<<endl;
    }
    void area(int l, int b)
    {
        int x=l;
        int y=b;
        int a=x*y;
        cout<<"Area of Rectangle with length = "<<x<<" and breadth = "<<y<<" is = "<<a<<endl;
    }
};

class Circle:public Shape
{
public:
    void perimeter(int r)
    {
        int x=r;
        int p=2*3.1425*x;
        cout<<"Perimeter of Circle with radius = "<<x<<" is = "<<p<<endl;
    }
    void area(int r)
    {
        int x=r;
        int a=3.1425*x*x;
        cout<<"Area of Circle with radius = "<<x<<" is = "<<a<<endl;
    }
};

int main()
{
    Shape *s=new Rectangle(5,10);
//    Circle c;
    //Rectangle R;
    //s=&R;
    s->perimeter(5,10);
    s->area(4,6);
    cout << "Hello world!" << endl;
    return 0;
}
