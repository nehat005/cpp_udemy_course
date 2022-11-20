#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }

    friend ostream & operator<<(ostream &out, Complex &c);
};

ostream & operator<<(ostream &out, Complex &c)
{
    out<<c.real<<" + i"<<c.img<<endl;
    return out;                                // return type = o stream&
}

int main()
{
    Complex c1(3,4);
    Complex c2(5,6);
    cout<<c1<<endl<<c2<<endl;
}
