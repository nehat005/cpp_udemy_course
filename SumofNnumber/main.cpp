#include<iostream>

using namespace std;

int main()
{
    int n,i=1,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    do
    {
       sum=sum+i;
       i++;
    }while(i<=n);

    cout<<sum;

    return 0;
}
