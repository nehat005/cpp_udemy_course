#include <iostream>

using namespace std;

int main()
{
    int row,col,i,j;
    cout<<"Enter row and col";
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(j<i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
    cout<<endl;
    }
}
