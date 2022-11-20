#include <iostream>

using namespace std;

class Rectangle
{
   private:
       int length, breadth;
   public:
       //functions getting values of data variables and writing those values are called mutators or mutator methods
        int setLength(int l)
        {
             length=l;
        }
        int setBreadth(int b)
        {
             breadth=b;
        }
        // functions to read the data values are accessor methods
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
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
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<"Area of Rectangle with length= "<<r1.getLength()<<" and breadth= "<<r1.getBreadth()<<" is = "<<r1.area();
    return 0;
}
