#include <iostream>

using namespace std;

class complex
{
private:
    int real,img;
public:
    int r,i;
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    friend complex operator+(complex c1, complex c2);

};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main()
{
    complex c1(3,5), c2(4,7), c3;
    c3=operator+(c1,c2); //we can write this way here because of friend function
    c3.display();

}
