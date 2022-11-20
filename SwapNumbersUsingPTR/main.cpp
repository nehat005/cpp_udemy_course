#include <iostream>

using namespace std;

int main()
{
    int x,y,temp;
    int *x1,*y1;
    cout<<"Enter X and Y values to be swapped: "<<endl;
    cin>>x>>y;
    x1=&x;
    y1=&y;
    temp=*x1;
    x=*y1;
    y=temp;

    cout<<"X and Y values after swapping are: "<<x<<"  "<<y;
    return 0;
}
