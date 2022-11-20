#include<iostream>

using namespace std;

int main()
{
    int m=0,n,rev=0,r;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
    {
        cout<<"It's a palindrome"<<endl;
    }
    else
    {
        cout<<"Its not a palindrome!"<<endl;
    }
    return 0;
}
