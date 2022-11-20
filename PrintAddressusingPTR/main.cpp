#include<iostream>
using namespace std;
int main()
{
    int *p;
    int x=5;
    p=&x;
    cout<<"Address of pointer: "<<&p<<endl;
    cout<<"Address of variable x: "<<&x<<endl;
    cout<<"Address stored in pointer p: "<<p<<endl;
    return 0;
}
