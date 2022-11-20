#include<iostream>
using namespace std;

class Rectangle
{
public:
    int l,b;
    float area()
    {
        return l*b;
    }
    float perimeter()
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle r1,r2;
    r1.l=5;
    r1.b=2.5;
    r2.l=10;
    r2.b=5;
    cout<<"Area of rectangle 1 with dimensions: length= "<<r1.l<<" and breadth= "<<r1.b<<" is: "<<r1.area()<<endl;
    cout<<"Perimeter of rectangle 1 with dimensions: length= "<<r1.l<<" and breadth= "<<r1.b<<" is: "<<r1.perimeter()<<endl;
    cout<<"Area of rectangle 2 with dimensions: length= "<<r2.l<<" and breadth= "<<r2.b<<" is: "<<r2.area()<<endl;
    cout<<"Perimeter of rectangle 2 with dimensions: length= "<<r2.l<<" and breadth= "<<r2.b<<" is: "<<r2.perimeter()<<endl;
    return 0;
}
