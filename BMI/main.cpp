#include<iostream>

using namespace std;
int main()
{
    float weight, height,bmi;
    cout<<"Enter weight in kgs"<<endl;
    cout<<"Enter weight in mtrs"<<endl;
    cin>>weight>>height;
    bmi=weight/(height*height);
    cout<<"BMI is "<<bmi;
    return 0;
}
