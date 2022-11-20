#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    //int price;
    int price;
    float price2;
    string mystr;
    /* Data Types: */
    cout << "Data Types: " << endl;
    cout << "Int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << endl;
    //cout << " float: " << sizeof(long float) << endl;

    /* string stream class from <sstream>  */

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    stringstream(mystr) >> price2;
    cout << "PRICE: "<< mystr;
    cout << "PRICE: "<< price;
    cout << "PRICE2: "<< price2;
    return 0;
}
