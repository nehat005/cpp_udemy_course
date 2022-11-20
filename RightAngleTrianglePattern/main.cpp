#include <iostream>

using namespace std;

int main()
{
    int row,col,i,j;
    cout<<"Enter rows and columns";
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col && j<=i;j++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }

    return 0;
}
