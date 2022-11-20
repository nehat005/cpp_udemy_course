#include<iostream>

using namespace std;

int main()
{
    int a,b,gcd,lim;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    if(a>b)
    {
        lim=a;
    }
    else
    {
        lim=b;
    }
    for(int i=1;i<=lim;i++)
    {
        if(a%i==0 && b%i==0)
        {

            gcd=i;
        }
    }
    cout<<"GCD of "<<a<<" & "<<b<<" is "<<gcd;
    return 0;
}
