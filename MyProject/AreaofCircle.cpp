#include<iostream>

int circlearea()
{
    int r;
    float area;
    std::cout<<"Enter radius"<<std::endl;
    std::cin>>r;
    area=3.1425*(float)r*(float)r;
    std::cout<<"Area of circle with radius"<<" "<<r<<" is"<<" "<<(float)area<<std::endl;
    return 0;
}
