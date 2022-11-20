#include <iostream>
#include <complex.h>


//to add two complex numbers
using namespace std;

class Complex
{
private:

    int real;
    int img;

public:
    Complex(int r=0,int i=0) //make them default parameters or else error appears :/ which nobody knows why
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    Complex operator+(Complex c1)
     {
     Complex temp;
     temp.real=real+c1.real;
     temp.img=img+c1.img;
     return temp;
     }
};
int main()
{
    Complex c1(5,3),c2(10,5),c3;

    c3=c1+c2;

    c3.display();
}
