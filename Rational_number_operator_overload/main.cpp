#include<iostream>

using namespace std;

class Rational
{
private:
    int p;
    int q;
public:
    Rational(int num=0,int den=0)
    {
        p=num;
        q=den;
    }
    Rational add(Rational r)
    {
        Rational temp;
        if(r.q==q)
        {
            temp.p=r.p+p;
            temp.q=r.q;
            return temp;
        }
        else
        {
            temp.p=p*r.q+q*r.p;
            temp.q=r.q*q;
            return temp;
        }
    }
    void display()
    {
        cout<<"Rational Number: "<<p<<"/"<<q<<endl;
    }

    friend ostream & operator<<(ostream &out, Rational &r);

};


ostream & operator<<(ostream &out, Rational &r)
{
    out<<"Rational Number: "<<r.p<<"/"<<r.q<<endl;
    return out;
}


int main()
{
   Rational r1(2,3);
   Rational r2(4,3);
   Rational r3;
   r3=r1.add(r2);
   cout<<r3<<endl;

}
