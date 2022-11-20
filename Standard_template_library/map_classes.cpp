#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout<<"Map is a data structure in cpp as a dictionary in Python"<<endl;
    map<int, string> m;
    m.insert(pair<int,string>(1, "john"));
    m.insert(pair<int,string>(2, "darby"));
    m.insert(pair<int,string>(3, "Ravi"));
    map<int, string>::iterator itr;

    for(itr = m.begin(); itr != m.end(); itr++)
    {
       // cout<<*itr<<endl; --> error, cant use it like this
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int, string>::iterator i1;
    i1 = m.find(3);
    cout<<"Value found at key number 3 is: "<<endl;
    cout<<i1->first<<" "<<i1->second<<endl;
}
