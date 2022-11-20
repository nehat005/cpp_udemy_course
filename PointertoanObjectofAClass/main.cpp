#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int length;
        int breadth;
        int area()
        {
             return (length*breadth);
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }

};

int main()
{
    Rectangle r1;
    Rectangle *ptr;
    ptr=&r1;
    ptr->length=10; //pointer is used to access object and its members
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    Rectangle *ptr2=new Rectangle; //pointer is used to access DYNAMIC object(I.E. IN HEAP MEMORY) and its members
    ptr2->length=20;
    ptr2->breadth=5;
    cout<<ptr2->area()<<endl;
    cout<<ptr2->perimeter()<<endl;
    return 0;
}
