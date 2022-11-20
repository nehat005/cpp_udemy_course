#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;

int main()
{
    // arrays:
    vector <int> v = {2,4,6,8,10};
    // insert values in array:

    v.push_back(20);

    cout<<"using Iterator"<<endl;
    vector<int>::iterator itr;

    //using for each loop:
    for(int x:v)
    {
        cout << x<<endl;
    }
    // using iterators:

    for(itr=v.begin();itr < v.end();itr++)
    {
        cout<<*itr<<endl;
    }


    cout<<"Adding each value before printing"<<endl;
    for(itr=v.begin();itr< v.end() ;itr++)
    {
        cout<< ++*itr<<" ";
    }

    cout<<endl<<"This modifies the values in the array"<<endl;
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;

    // linked list:
    cout<<"Using linked list"<<endl;
    list <int> l = {2,6,1,0,19};
    list <int>::iterator list_itr;
    l.push_back(20);
    for (int x:l)
        cout<<x <<endl;

    // set:
    cout<<"Using Set"<<endl;
    set <int> s = {2,6,1,0,19};
    set <int>::iterator set_itr;
    // s.push_back(20) ==> not available in set
    s.insert(2);
    cout<<"Printing set: "<<endl;
    for (int x:s)
        cout<< x <<endl;



}
