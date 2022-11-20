#include <iostream>

using namespace std;

int main()
{
    int basicSal;
    float allowances;
    float deductions;
    float finalSalary;

    cout<<"Enter Salary: "<<endl;
    cout<<"Enter % of allowances: "<<endl;
    cout<<"Enter % of Deductions: "<<endl;
    cin>>basicSal>>allowances>>deductions;
    finalSalary=basicSal+(basicSal*allowances)/100-(basicSal*deductions)/100;
    cout<<"Final Salary is "<<finalSalary<<endl;
    return 0;

}
