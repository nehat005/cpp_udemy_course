#include <iostream>

using namespace std;

int main()
{
    //Sorting the array in ascending order
    int A[10]={12,334,56,89,4,80,14,15,67,46};
    int temp,key,low,high,mid,mid_val;
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;

            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
    //Binary search
    cout<<"Enter key(or value) to search"<<endl;
    cin>>key;
    low=0;
    high=9;
    while(low<=high)
    {
        mid=(high+low)/2;
        mid_val=A[mid];
        if(mid_val==key)
        {
          cout<<"Key found at "<<mid+1;
          return 0;
        }
        else if(key<mid_val)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<"Not found!"<<endl;

}
