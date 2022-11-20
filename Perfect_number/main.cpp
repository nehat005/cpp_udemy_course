#include<iostream>

using namespace std;

int main()
{
    int i=1,n,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Factors of "<<n<<" are: ";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }
    }
    if((n*2)==sum)
    {
        cout<<n<<" is a perfect number"<<endl;
    }
    else
        cout<<n<<" is not a perfect number"<<endl;

    return 0;
}
