#include<iostream>
using namespace std;
int main()
{
    //ADDRESS VARIABLE - pointer
    int x=2;
    int *p; //Declaration
    p=&x; //Initialization

    cout<<"Value of Pointer is: "<<p<<endl;
    cout<<"Address of that address: "<<&x<<endl;
    cout<<"Address of Pointer is: "<<&p<<endl;
    cout<<"Value stored at address at which Pointer p is pointing : "<<*p<<endl; //Dereferencing of a pointer


    return 0;
}
