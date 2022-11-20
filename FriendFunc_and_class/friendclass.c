#include <iostream>

using namespace std;
class new;
class old
{
    private: int a;
    public: int b;
    protected: int c;
    friend new;
};

class new
{
    void anything()
    {
        old meh;
        meh.a=15;
        cout<<meh.a<<endl;
    }

};

int main()
{
    new a;
    a.anything();
    return 0;
}
