#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int math,science;
    int eng;

public:
    Student(int r,string n,int math,int science,int eng)
    {
        roll_no=r;
        name=n;
        this->math=math;
        this->science=science;
        this->eng=eng;
    }

    int Total()
    {
        return (math+science+eng);
    }

    char grade()
    {
        float percent;
        float avgg;
        avgg= Total()/3;
        cout<<avgg<<endl;
        //percent=avgg*100;
        //cout<<percent<<endl;
        if(avgg>75)
        {
            //cout<<"GRADE A"<<endl;
            return 'A';
        }
        else if(avgg>50 && avgg<75)
        {
            //cout<<"GRADE B"<<endl;
            return 'B';
        }
        else
        {
            //cout<<"GRADE C"<<endl;
            return 'C';
        }
    }
};

/*inline void grade(float avg)
{
    float percent;
    percent=avg*100;
    if(percent>75)
    {
        cout<<"GRADE A"<<endl;
    }
    else if(percent>50 && percent<75)
    {
        cout<<"GRADE B"<<endl;
    }
    else
    {
        cout<<"GRADE C"<<endl;
    }
}*/

int main()
{
    int roll,m,e,s;
    string name;
    cout<<"Enter roll No: ";
    cin>>roll;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks in math: ";
    cin>>m;
    cout<<"Enter marks in eng: ";
    cin>>e;
    cout<<"Enter marks in science: ";
    cin>>s;
    Student s1(roll,name,m,s,e);

    //s1.Total_marks();
    //s1.AVG();
    //s2.Total_marks();
    //s2.AVG();
    //s3.Total_marks();
    //s3.AVG();
    cout<<"Total marks obtained: "<<s1.Total()<<" out of 300"<<endl;
    cout<<"Grade of "<<name<<" is: "<<s1.grade()<<endl;
    //cout<<"Grade of Veena is: "<<s2.grade()<<endl;
    //cout<<"Grade of Aish is: "<<s3.grade()<<endl;
    return 0;
}
