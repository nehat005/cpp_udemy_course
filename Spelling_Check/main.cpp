#include<iostream>
using namespace std;

int main()
{
    int i=0;
    char spell[6];
    cout<<"Enter 1st letter";
    cin>>spell[0];
    cout<<"Enter 2nd letter";
    cin>>spell[1];
    cout<<"Enter 3rd letter";
    cin>>spell[2];
    cout<<"Enter 4th letter";
    cin>>spell[3];
    cout<<"Enter 5th letter";
    cin>>spell[4];
    cout<<"Enter 6th letter";
    cin>>spell[5];
    cout<<"Enter 7th letter";
    cin>>spell[6];
    for(i=0;i<8;i++)
    {
    switch (spell[i])
    {
        case 0:
            if (spell[0]!='R')
            {
                cout<<"WRONG!";
                break;
            }
       case 1:
            if (spell[1]!='A')
            {
                cout<<"WRONG!";
                break;
            }
       case 2:
            if (spell[2]!='I')
            {
                cout<<"WRONG!";
                break;
            }
        case 3:
            if (spell[3]!='N')
            {
                cout<<"WRONG!";
                break;
            }
        case 4:
            if (spell[4]!='B')
            {
                cout<<"WRONG!";
                break;
            }
        case 5:
            if (spell[5]!='O')
            {
                cout<<"WRONG!";
                break;
            }
        case 6:
            if (spell[6]!='W')
            {
                cout<<"WRONG!";
                break;
            }
        default:
            cout<<"CORRECT!"<<endl;
    }
    }

}
