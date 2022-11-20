#include<iostream>

using namespace std;

void Search(int n,int A[],int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            cout<<"Key "<<key<<" found at index = "<<i;
            break;
        }
    }
}

int main()
{
    int n,key;
    cout<<"Enter number of elements in an array: "<<endl;
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"  ";
    }
    cout<<"Enter key to be found: "<<endl;
    cin>>key;
    Search(n,A,key);

    return 0;
}
