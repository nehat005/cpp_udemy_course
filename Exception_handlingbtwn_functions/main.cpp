#include <iostream>

using namespace std;

class MyException:exception
{
};

int divide(int x,int y)throw(int) //This is to indicate that divide function throws int exception
{
    if(y==0)
        throw 1;
    return x/y;
}
int division(int x,int y)throw(MyException)
{
    if(y==0)
        throw MyException(); //Constructor of that class is called
    return x/y;
}


int main()
{
    int a=10, b=0, f=10;
    try
    {
        int c=division(a,b);
        int d=divide(a,f); //this line wont execute because 1st line threw error!
    }
    catch(int e)
    {
        cout<<"Division by 0"<<endl;
    }
    catch(MyException e)
    {
       cout<<"Division by 0"<<endl;
    }
    return 0;
}



