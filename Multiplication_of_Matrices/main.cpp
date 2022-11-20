#include<iostream>
using namespace std;
int main()
{
    int n,m,n1,m1,A[10][10],B[10][10],C[10][10];
    cout<<"Enter no. of rows and columns for 1st matrix: ";
    cin>>n>>m;
    cout<<"Enter no. of rows and columns for 2nd matrix: ";
    cin>>n1>>m1;
    if(m==n1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter elements of "<<i<<" row of 1st matrix";
            for(int j=0;j<m;j++)
            {

                cin>>A[i][j];
            }
        }
        for(int i=0;i<n1;i++)
        {
            cout<<"Enter elements of "<<i<<" row of 2nd matrix";
            for(int j=0;j<m1;j++)
            {
                cin>>B[i][j];
            }
        }
        cout<<"A matrix: "<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<A[i][j];
                cout<<"  ";
            }
        cout<<endl;
        }
        cout<<"B matrix: "<<endl;
         for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                cout<<B[i][j];
                cout<<"  ";
            }
        cout<<endl;
        }
        cout<<endl;
        for(int i=0;i<n;++i)
        {
            for(int j=0;i<m1;++j)
            {
                C[i][j]=0;
                for(int k=0;k<m;++k)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;i<m1;++j)
            {
                cout<<C[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Matrix multiplication not possible!";
    }
    return 0;
}
