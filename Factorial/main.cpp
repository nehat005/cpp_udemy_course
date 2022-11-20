#include<iostream>

using namespace std;

int main()
{
    int n,i=1,ans=1;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n==0)
    {
        ans=1;
        cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
          ans=ans*i;
        }
        cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    }
    return 0;
}
