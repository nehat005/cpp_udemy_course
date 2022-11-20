/*##Pointer Example Program with Reference operator (&) and Dereference operator (*)*/
/*##Simple Pointer Programs,Reference operator,Dereference operator*/

// Header Files
#include <iostream>

using namespace std;

int main()
{


   //Pointer Variable Declaration for Integer Data Type
    int *ptr;
    int val;

    val=1;
    cout<<"Address of val: "<<&val<<endl;
    cout<<"Data of Val: "<<val<<endl;

    ptr=&val;
    cout<<"Address of pointer: "<<&ptr<<endl;
    cout<<"Value of pointer: "<<*ptr<<endl;

    *ptr=3;
    cout<<"Address of val: "<<&val<<endl;
    cout<<"value of val: "<<val<<endl;
    return 0;
}
