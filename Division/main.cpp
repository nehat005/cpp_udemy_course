#include<iostream>

using namespace std;

int main()
{
    float a,b,c;
    float ans;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter which one is denominator"<<endl;
    cin>>c;
    if(c==b)
    {
        if(b==0)
        {
            cout<<"Error: Division by Zero not possible"<<endl;
        }
        else
        {
            ans=a/b;
            cout<<"answer is "<<ans<<endl;
        }
    }
    else if(c==a)
    {
        if(a==0)
        {

            cout<<"Error:Division by zero"<<endl;
        }
        else
        {
            ans=b/a;
            cout<<"Answer is "<<ans<<endl;
        }
    }
    else
    {
        cout<<"Try Again!"<<endl;
    }

    return 0;
}
