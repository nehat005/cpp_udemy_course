#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=0;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i;
        cout<<endl;
    }
    return 0;
}
