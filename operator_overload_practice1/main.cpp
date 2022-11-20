#include<iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)       //set to default values incase arguments are not passed
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    Complex operator+(Complex x)     //operator is overloaded hence need to write a seperate function
    {
        Complex temp;               //temp variable to store values of c3 in this function
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};

int main()
{
    Complex c1(3,4), c2(5,9), c3;
    c3= c1+c2;                      //never write c1.operator+(c2)
    c3.display();
}
