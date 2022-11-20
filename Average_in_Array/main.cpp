#include<iostream>
using namespace std;
int main()
{
    int num[100],n;
    float avg=0;
    cout<<"Enter no. of elements: \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element value: ";
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        avg=num[i]+avg;
    }
    avg=avg/n;
    cout<<"Average = "<<avg;
    return 0;
}
