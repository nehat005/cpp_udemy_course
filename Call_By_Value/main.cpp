#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"SWAPPED VALUES IN SWAP FUNCTION: "<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
}

int main()
{
    int x,y;
    cout<<"Enter values to be swapped: "<<endl;
    cin>>x>>y;

    swap(x,y);
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}
